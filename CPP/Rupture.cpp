
#include "string"

#include "..\HPP\Rupture.hpp"

using namespace std;

Rupture::Rupture(){}

Rupture::Rupture(Joueur* joueur, std::string raisons, Club* club, float penalite){

    this->joueur = joueur;
    this->raisonsDepart = raisons;
    this->nouveauClub = club;
    this->penalite = penalite;

}

Rupture::~Rupture(){}

Joueur* Rupture::getJoueur(){

    return this->joueur;

}

void Rupture::setJoueur(Joueur* joueur){

    this->joueur = joueur;

}

string Rupture::getRaisonsDepart(){

    return this->raisonsDepart;

}

void Rupture::setRaisonsDepart(string raisons){

    this->raisonsDepart = raisons;

}

Club* Rupture::getNouveauClub(){

    return this->nouveauClub;

}

void Rupture::setNouveauClub(Club* club){

    this->nouveauClub = club;

}

float Rupture::getPenalite(){

    return this->penalite;

}

void Rupture::setPenalite(float penalite){

    this->penalite = penalite;
    
}