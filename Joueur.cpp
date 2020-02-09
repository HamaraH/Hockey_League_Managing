#include <iostream>
#include <string>
#include "Joueur.hpp"

using namespace std;

Joueur::Joueur(){}

Joueur::Joueur(string nom, string prenom, float taille, float poids, string ville){
    this->Nom = nom;
    this->Prenom = prenom;
    this->Taille = taille;
    this->Poids = poids;
    this->Ville = ville;
}

Joueur::~Joueur(){}
 
        string Joueur::getNom()
        {
            return this->Nom;
        }

     
        void Joueur::setNom(string Nom)
        {
            this->Nom = Nom;
        }

     
        string Joueur::getPrenom()
        {
            return this->Prenom;
        }

     
        void Joueur::setPrenom(string Prenom)
        {
            this->Prenom = Prenom;
        }

     
        float Joueur::getTaille()
        {
            return this->Taille;
        }

     
        void Joueur::setTaille(float Taille)
        {
            this->Taille = Taille;
        }

     
        float Joueur::getPoids()
        {
            return this->Poids;
        }

     
        void Joueur::setPoids(float Poids)
        {
            this->Poids = Poids;
        }

     
        string Joueur::getVille()
        {
            return this->Ville;
        }

     
        void Joueur::setVille(string Ville)
        {
            this->Ville = Ville;
        }

void Joueur::toString(){
    cout<< "Nom : " << this->getNom() << "\nPrenom : " 
    << this->getPrenom() << "\nTaille : " << this->getTaille() << "m\nPoids : " << this->getPoids() << "kg\nVille : " << this->getVille() << "\n\n";
}