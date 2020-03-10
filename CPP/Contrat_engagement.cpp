
#include "..\HPP\Contrat_engagement.hpp"

Contrat_engagement::Contrat_engagement(){}

Contrat_engagement::Contrat_engagement(Club* club_contract, Club* clubLibere,int duree, tm dateentree,Reglement* reglement, tm datecontrat){

    this->clubContractant = club_contract;
    this->clubLibere = clubLibere;
    this->dureeContrat = duree;
    this->dateEntree = dateentree;
    this->reglement = reglement;
    this->dateContrat = datecontrat;

}

Contrat_engagement::Contrat_engagement(Joueur* joueur,Club* club_contract, Club* clubLibere,int duree, tm dateentree,Reglement* reglement, tm datecontrat){

    this->setJoueurContractant(joueur);
    this->clubContractant = club_contract;
    this->clubLibere = clubLibere;
    this->dureeContrat = duree;
    this->dateEntree = dateentree;
    this->reglement = reglement;
    this->dateContrat = datecontrat;

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

int Contrat_engagement::getDureeContrat(){

    return this->dureeContrat;

}

void Contrat_engagement::setDureeContrat(int duree){

    this->dureeContrat = duree;
}

tm Contrat_engagement::getDateEntree(){
    
    return this->dateEntree;

}

void Contrat_engagement::setDateEntree(tm date){

    this->dateEntree = date;

}

Reglement*  Contrat_engagement::getReglement(){

    return this->reglement;

}

void Contrat_engagement::setReglement(Reglement*  reglement){

    this->reglement  = reglement;

}

tm Contrat_engagement::getDateContrat(){

    return this->dateContrat;

}

void Contrat_engagement::setDateContrat(tm date){

    this->dateContrat = date;

}
