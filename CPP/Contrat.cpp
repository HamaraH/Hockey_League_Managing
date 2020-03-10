
#include "..\HPP\Contrat.hpp"

Contrat::Contrat(){}

Contrat::Contrat(Joueur* joueur){

    this->joueurContractant = joueur;

}

Contrat::~Contrat(){}

 void Contrat::setJoueurContractant(Joueur* joueur){

    this->joueurContractant = joueur;
}

Joueur* Contrat::getJoueurContractant(){

    return this->joueurContractant;

}
