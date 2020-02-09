#include "Stade.hpp"
#include <string>

using namespace std;

Stade::Stade(){}

Stade::Stade (int capacite, std::string qualite, std::string nom, std::string adresse){
    this->Capacite = capacite;
    this->Qualite = qualite;
    this->Nom = nom;
    this->Adresse = adresse;
}

Stade::~Stade(){};

void Stade::setcapacite(int capac){

    this->Capacite = capac;

}

int Stade::getCapacite(){

    return this->Capacite;
}

void Stade::setQualite(string qualite){

    this->Qualite = qualite;

}

string Stade::getQualite(){

    return this->Qualite;

}

void Stade::setNom(string nom){

    this->Nom = nom;

}

string Stade::getNom(){

    return this->Nom;

}
    
void Stade::setAdresse(string adresse){

    this->Adresse = adresse;

}

string Stade::getAdresse(){

     return this->Adresse;

}