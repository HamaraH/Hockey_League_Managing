
#include <iostream>
#include <string>

#include "..\HPP\Joueur.hpp"

using namespace std;

    Joueur::Joueur(){}


    Joueur::Joueur(string nom, string prenom, float taille, float poids, string ville, vector<Parcours*> parcours):Sportif(nom,prenom){
        
        this->Taille = taille;
        this->Poids = poids;
        this->Ville = ville;
        this->parcours=parcours;

    }

    Joueur::Joueur(string nom, string prenom, float taille, float poids, string ville){

        this->setNom(nom);
        this->setPrenom(prenom);
        this->setTaille(taille);
        this->setPoids(poids);
        this->setVille(ville);

    }

    Joueur::~Joueur(){}
 
   

    void Joueur::ajout_parcours(Parcours* parcours){
        this->parcours.push_back(parcours);
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

    vector<Parcours*> Joueur::getParcours(){

        return this->parcours;

    }

    void Joueur::setParcours(vector<Parcours*> p){

        this->parcours = p;

    }