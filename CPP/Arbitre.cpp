
#include <string>
#include "..\HPP\Arbitre.hpp"

using namespace std;

Arbitre::Arbitre(){}

Arbitre::Arbitre(string nom ,string prenom ,string lieu, int experience){

    this->setNom(nom);
    this->setPrenom(prenom);
    this->setLieuObtentionDiplome(lieu);
    this->setExperienceArbitrage(experience);

}

Arbitre::~Arbitre(){
}

string Arbitre::getLieuObtentionDiplome(){

    return this->lieuObtentionDiplome;

}

void Arbitre::setLieuObtentionDiplome(string lieu){

    this->lieuObtentionDiplome = lieu;

}

int Arbitre::getExperienceArbitrage(){

    return this->experienceArbitrage;

}

void Arbitre::setExperienceArbitrage(int experience){

    this->experienceArbitrage = experience;

}