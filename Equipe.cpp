
#include "Equipe.hpp"

Equipe::Equipe(){}

Equipe::Equipe(Club* club, int nbJ, int nbG, Joueur* capitaine){

    this->club = club;
    this->nbJoueurs = nbJ;
    this->nbGardiens = nbG;
    this->capitaineEquipe = capitaine;
    
}

Equipe::~Equipe(){}

Club* Equipe::getClub(){

    return this->club;

}

void Equipe::setClub(Club* club){

    this->club = club;

}

int Equipe::getNbJoueurs(){

    return this->nbJoueurs;

}

void Equipe::setNbJoueurs(int nb){

    this->nbJoueurs = nb;

}

int Equipe::getNbGardiens(){

    return this->nbGardiens;

}
void Equipe::setNbGardiens(int nb){

    this->nbGardiens = nb;

}

Joueur* Equipe::getCapitaineEquipe(){

    return this->capitaineEquipe;

}

void Equipe::setCapitaineEquipe(Joueur* capitaine){

    this->capitaineEquipe = capitaine;

}