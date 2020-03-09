
#include "Contrat.hpp"

Contrat::Contrat(){}

Contrat::Contrat(Joueur* joueur, int duree, tm dateentree, Reglement* reglement, tm datecontrat){

    this->joueurContractant = joueur;
    this->dureeContrat = duree;
    this->dateEntree = dateentree;
    this->reglement = reglement;
    this->dateContrat = datecontrat;

}

Contrat::~Contrat(){}

 void Contrat::setJoueurContractant(Joueur* joueur){

    this->joueurContractant = joueur;
}

Joueur* Contrat::getJoueurContractant(){

    return this->joueurContractant;

}

int Contrat::getDureeContrat(){

    return this->dureeContrat;

}

void Contrat::setDureeContrat(int duree){

    this->dureeContrat = duree;
}

tm Contrat::getDateEntree(){
    
    return this->dateEntree;

}

void Contrat::setDateEntree(tm date){

    this->dateEntree = date;

}

Reglement*  Contrat::getReglement(){

    return this->reglement;

}

void Contrat::setReglement(Reglement*  reglement){

    this->reglement  = reglement;

}

tm Contrat::getDateContrat(){

    return this->dateContrat;

}

void Contrat::setDateContrat(tm date){

    this->dateContrat = date;

}
