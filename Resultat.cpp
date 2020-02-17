
#include "Resultat.hpp"

Resultat::Resultat(){}

Resultat::Resultat(int nb1, int nb2){

    this->nbButsLocale = nb1;
    this->nbButsAdverse = nb2;

}

Resultat::~Resultat(){}

int Resultat::getNbButsLocale(){

    return this->nbButsLocale;

}

void Resultat::setNbButsLocale(int nb){

    this->nbButsLocale = nb;

}

int Resultat::nbButsAdverse(){

    return this->nbButsAdverse;

}

void Resultat::setNbButsAdverse(int nb){

    this->nbButsAdverse = nb;
    
}