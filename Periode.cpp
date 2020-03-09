
#include "Periode.hpp"

Periode::Periode(){}

Periode::Periode(int duree, int nb1, int nb2){

    this->duree = duree;
    this->nbButsLocale = nb1;
    this->nbButsAdverse = nb2;

}

Periode::~Periode(){}

int Periode::getDuree(){

    return this->duree;

}

void Periode::setDuree(int duree){

    this->duree = duree;

}

int Periode::getNbButsLocale(){

    return this->nbButsLocale;

}

void Periode::setNbButsLocale(int nb){

    this->nbButsLocale = nb;

}

int Periode::getNbButsAdverse(){

   return this->nbButsAdverse;

}

void Periode::setNbButsAdverse(int nb){

    this->nbButsAdverse = nb;
    
}