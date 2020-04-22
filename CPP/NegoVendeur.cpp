#include "../HPP/NegoVendeur.hpp"

NegoVendeur::NegoVendeur(){}


NegoVendeur::NegoVendeur(Club* rep,double desire,double min){
    this->representantClub=rep;
    this->desire=desire;
    this->min=min;
}
NegoVendeur::~NegoVendeur(){}
        

double NegoVendeur::getMin(){
    return this->min;
}
void NegoVendeur::setMin(double min){
    this->min=min;
}