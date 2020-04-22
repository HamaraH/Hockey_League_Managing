#include "../HPP/Negociation.hpp"
#include <windows.h>
#include <iostream>

#include <algorithm>
#include <cmath>

Negociation::Negociation(){};

Negociation::Negociation(NegoAcheteur acheteur, NegoVendeur vendeur){
    this->acheteur=acheteur;
    this->vendeur=vendeur;
    this->duree=0;
    this->conclu=false;
    this->proposer=NULL;
    this->quiPropose=false;
}



Negociation::~Negociation(){}

NegoAcheteur Negociation::getAcheteur(){
    return this->acheteur;
}
void Negociation::setAcheteur(NegoAcheteur acheteur){
    this->acheteur=acheteur;
}

NegoVendeur Negociation::getVendeur(){
    return this->vendeur;
}
void Negociation::setVendeur(NegoVendeur vendeur){
    this->vendeur=vendeur;
}

double Negociation::getDuree(){
    return this->duree;
}
void Negociation::setDuree(double duree){
    this->duree=duree;
}
bool Negociation::getConclu(){
    return this->conclu;
}
void Negociation::setConclu(bool conclu){
    this->conclu=conclu;
}
double Negociation::getProposer(){
    return this->proposer;
}
void Negociation::setProposer(double proposer){
    this->proposer=proposer;
}

bool Negociation::getQuiPropose(){
    return this->quiPropose;
}
void Negociation::setQuiPropose(bool quiPropose){
    this->quiPropose=quiPropose;
}




std::vector<std::string> Negociation::getEchange(){
    return this->echange;
}
void Negociation::setEchange(std::vector<std::string> vec){
    this->echange=vec;
}


void Negociation::AjoutEchange(std::string str){
    this->echange.push_back(str);
}



void Negociation::DebutNegociation(){

    std::mutex mutex;
    std::thread Achat(Negociation::ThreadAcheteur,this,&mutex);
    std::thread Vente(Negociation::ThreadVendeur,this,&mutex);

    
    //chronometre qui calcule la durée
    auto start = std::chrono::steady_clock::now();
    while(this->duree<8||!this->getConclu()){
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> diff = end-start;
        mutex.lock();
        this->duree=diff.count();
        mutex.unlock();
    }
    Vente.join();
    Achat.join();
    
    //affichage des logs
    std::vector<std::string> logs = this->getEchange();
    for(int i=0;i<logs.size();i++){
        std::cout<<logs[i]<<std::endl;
    }
    //creation du contrat si nécéssaire

}

//implémentation tour par tour

void Negociation::ThreadAcheteur(Negociation* negociation, std::mutex* mutex){
    while(negociation->getDuree()<8||!negociation->getConclu()){
        negociation->ProposerOffre(mutex);
    }
}




void Negociation::ThreadVendeur(Negociation* negociation, std::mutex* mutex){
    while(negociation->getProposer()==NULL){
        Sleep(1);
    }
    while(negociation->getDuree()<8||!negociation->getConclu()){
        while(!negociation->getQuiPropose()){
            Sleep(1);
        }
        mutex->lock();
        //indique la rapidité du déclin de prix
        const double facteur =7;
        //formule mathématique du vendeur : voir le fichier exel pour représentation graphique et formule plus claire
        double seuil = std::min(std::max(negociation->getVendeur().getDesire()/exp(negociation->getDuree()/facteur),negociation->getVendeur().getMin()),negociation->getVendeur().getDesire());
        if(seuil>negociation->getProposer()){
            negociation->RejeterOffre();
        }
        else{
            negociation->AccepterOffre();
        }
        negociation->setQuiPropose(false);
        mutex->unlock();
    }



}



void Negociation::ProposerOffre(std::mutex* mutex){
    while(this->getQuiPropose()){
        Sleep(1);
    }
    mutex->lock();
    //indique la rapidité de la croissance du prix
    const double facteur =3.5;
    //formule mathématique de l'acheteur : voir le fichier exel pour représentation graphique et formule plus claire
    this->setProposer(std::max(std::min(this->getAcheteur().getDesire()*exp(this->getDuree()/facteur),this->getAcheteur().getMax()),this->getAcheteur().getDesire()));
    std::string log("L'acheteur propose ", this->getProposer());
    this->AjoutEchange(log);
    this->setQuiPropose(true);
    mutex->unlock();
}
void Negociation::AccepterOffre(){
    std::string log("Le vendeur accepte l'offre de ", this->getProposer());
    this->AjoutEchange(log);
    this->setConclu(true);
}
void Negociation::RejeterOffre(){
    std::string log("Le vendeur refuse l'offre de ", this->getProposer());
    this->AjoutEchange(log);
}
