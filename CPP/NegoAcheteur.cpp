#include "../HPP/NegoAcheteur.hpp"


NegoAcheteur::NegoAcheteur(){}

NegoAcheteur::NegoAcheteur(Club* rep,double desire,double max){
    this->representantClub = rep;
    this->desire = desire;
    this->max=max;
}

NegoAcheteur::~NegoAcheteur(){}
        

double NegoAcheteur::getMax(){
    return this->max;
}
void NegoAcheteur::setMax(double max){
    this->max=max;
}