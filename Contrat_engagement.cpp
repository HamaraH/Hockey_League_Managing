#include "Contrat_engagement.hpp"


Contrat_engagement::Contrat_engagement(){}

Contrat_engagement::Contrat_engagement(Club* club_contract, Club* clubLibere){

    this->clubContractant = club_contract;
    this->clubLibere = clubLibere;

}

Contrat_engagement::Contrat_engagement(Club* club_contract, Club* clubLibere, Joueur* joueurContract, int duree, tm dateEntree, Reglement* reglement, tm dateContrat){

    this->clubContractant = club_contract;
    this->clubLibere = clubLibere;
    this->setJoueurContractant(joueurContract);
    this->setDureeContrat(duree);
    this->setDateEntree(dateEntree);
    this->setDateContrat(dateContrat);
    this->setReglement(reglement);

}

Contrat_engagement::~Contrat_engagement(){}

Club* Contrat_engagement::getClubContractant(){

    return this->clubContractant;

}

void Contrat_engagement::setClubContractant(Club* club){

    this->clubContractant = club;

}

Club* Contrat_engagement::getClubLibere(){

    return this->clubLibere;

}

void Contrat_engagement::setClubLibere(Club* club){

    this->clubLibere = club;

}