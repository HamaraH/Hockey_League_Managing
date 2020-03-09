
#include "..\HPP\Sportif.hpp"

Sportif::Sportif(){}

Sportif::Sportif(std::string nom, std::string prenom){

    this->nom = nom;
    this->prenom = prenom;

}

Sportif::~Sportif(){}

std::string Sportif::getNom(){

    return this->nom;

}

void Sportif::setNom(std::string nom){

    this->nom = nom;
}

std::string Sportif::getPrenom(){

    return this->prenom;

}
void Sportif::setPrenom(std::string prenom){

    this->prenom = prenom;

}