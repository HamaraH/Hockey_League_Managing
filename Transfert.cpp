

#include "Transfert.hpp"


Transfert::Transfert(){}

Transfert::Transfert(Joueur* joueur , Club* clubContractant, Club* clubLibere, int dureeContrat, tm dateEntree , Reglement* reglement, tm dateContrat){

    this->joueurContractant = joueur;
    this->clubContractant = clubContractant;
    this->clubLibere = clubLibere;
    this->dureeContrat = dureeContrat;
    this->dateEntree = dateEntree;
    this->reglement  = reglement;
    this->dateContrat = dateContrat;

}

Transfert::~Transfert(){}

Joueur* Transfert::getJoueurContractant(){

    return this->joueurContractant;

}

void Transfert::setJoueurContractant(Joueur* joueur){

    this->joueurContractant = joueur;
}

Club* Transfert::getClubContractant(){

    return this->clubContractant;

}

void Transfert::setClubContractant(Club* club){

    this->clubContractant = club;

}

Club* Transfert::getClubLibere(){

    return this->clubLibere;

}

void Transfert::setClubLibere(Club* club){

    this->clubLibere = club;

}

int Transfert::getDureeContrat(){

    return this->dureeContrat;

}

void Transfert::setDureeContrat(int duree){

    this->dureeContrat = duree;
}

tm Transfert::getDateEntree(){
    
    return this->dateEntree;

}

void Transfert::setDateEntree(tm date){

    this->dateEntree = date;

}

Reglement*  Transfert::getReglement(){

    return this->reglement;

}

void Transfert::setReglement(Reglement*  reglement){

    this->reglement  = reglement;

}

tm Transfert::getDateContrat(){

    return this->dateContrat;

}

void Transfert::setDateContrat(tm date){

    this->dateContrat = date;

}