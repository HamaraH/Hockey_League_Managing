
#include "..\HPP\Reglement.hpp"

Reglement::Reglement(){}

Reglement::Reglement(float seuil, std::string description, float montantTransfert, float montantEncaisse, float montantRestant){

    this->seuil = seuil;
    this->descriptionDroits = description;
    this->montantTransfert = montantTransfert;
    this->montantEncaisse = montantEncaisse;
    this->montantRestant = montantRestant;

}

Reglement::~Reglement(){}

float Reglement::getSeuil(){

    return this->seuil;

}

void Reglement::setSeuil(float seuil){

    this->seuil = seuil;
}

std::string Reglement::getDescriptionDroits(){

    return this->descriptionDroits;

}

 void Reglement::setDescriptionDroits(std::string description){

     this->descriptionDroits = description;

 }

float Reglement::getMontantTransfert(){

    return this->montantTransfert;

}

void Reglement::setMontantTransfert(float montant){

    this->montantTransfert = montant;

}

float Reglement::getMontantEncaisse(){

    return this->montantEncaisse;

}

void Reglement::setMontantEncaisse(float montant){

    this->montantEncaisse = montant;
}

float Reglement::getMontantRestant(){

    return this->montantRestant;

}
    
void Reglement::setMontantRestant(float montant){

    this->montantRestant = montant;
}
