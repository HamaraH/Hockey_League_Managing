#include <iostream>
#include <string>
#include "Club.hpp"

using namespace std;

    Club::Club(){}

    Club::Club(string histoire, string couleur,vector<Joueur> liste,Palmares palmares,Stade stade, string ville, string adresse,vector<Personne> staff_technique){

        this->histoire=histoire;
        this->couleur=couleur;
        this->effectif=liste;
        this->palmares=palmares;
        this->stade=stade;
        this->ville = ville;
        this->adresse = adresse;
        this->staff_technique = staff_technique;

    }

    Club::~Club(){}

    string Club::getHistoire(){

        return histoire;
    }

    void Club::setHistoire(string histoire){

        this->histoire = histoire;
    }

    string Club::getCouleur(){

        return this->couleur;
    }

    void Club::setCouleur(string couleur){

       this->couleur = couleur;
    }

    string Club::getDate(){

        return this->date;
    }

    void Club::setDate(string date){

       this->date = date;
    }

    vector<Joueur> Club::getListeJoueurs(){

        return this->effectif;

    }

    void Club::setListeJoueurs(vector<Joueur> liste){

        this->effectif = liste;
    }
    
    Palmares Club::getPalmares(){

        return this->palmares;

    }

    void Club::setPalmares(Palmares palma){

        this->palmares = palmares;

    }

    void Club::setStade(Stade stade){

        this->stade = stade;

    }

    Stade Club::getStade(){

        return this->stade;

    }

    void Club::setVille(string ville){

        this->ville = ville;

    }

    string Club::getVille(){

        return this->ville;

    }

    void Club::setAdresse(string adresse){

        this->adresse = adresse;

    }

   string Club::getAdresse(){

       return this->adresse;

   }

   void Club::setStaffTechnique(vector<Personne> staff_technique){

       this->staff_technique = staff_technique;

   }

   vector<Personne> Club::getStaffTechnique(){

       return this->staff_technique;

   }



