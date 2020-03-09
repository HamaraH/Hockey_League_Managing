
#include "string"

#include "..\HPP\Joueur_non_autonome.hpp"

using namespace std;

Joueur_non_autonome::Joueur_non_autonome(float taille, float poids, string ville , vector<Parcours*> parcours, int annee_min, std::string nom, std::string prenom){

    this->setTaille(taille);
    this->setPoids(poids);
    this->setVille(ville);
    this->nb_anne_min = annee_min;
    this->setParcours(parcours);

}

Joueur_non_autonome::Joueur_non_autonome(){}
Joueur_non_autonome::~Joueur_non_autonome(){}

int Joueur_non_autonome::getNbAnneeMin(){

    return this->nb_anne_min;

}

void Joueur_non_autonome::setNbAnneeMin(int nb){

    this->nb_anne_min = nb;

}