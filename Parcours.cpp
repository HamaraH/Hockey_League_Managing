#include <string>
#include "Parcours.hpp"

using namespace std;

Parcours::Parcours(){}

Parcours::Parcours(std::string nom, std::tm date){

    this->nom_club = nom;
    this->date = date;

}

Parcours::~Parcours(){
}

std::string Parcours::getNomClub(){

    return this->nom_club;

}

void Parcours::setNomClub(std::string nom){

    this->nom_club = nom;

}

std::tm Parcours::getDate(){

    return this->date;

}

void Parcours::setDate(std::tm date){

    this->date = date;
}
    