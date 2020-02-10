#include <iostream>
#include <string>
#include "Club.hpp"

using namespace std;

    Club::Club(){}

    Club::Club(string histoire, string couleur,std::tm date,vector<Joueur*> liste,std::vector<Palmares*> palmares,Stade* stade, string ville, string adresse,vector<Personne*> staff_technique, Entraineur* entraineur){

        this->histoire=histoire;
        this->couleur=couleur;
        this->date=date;
        this->effectif=liste;
        this->palmares=palmares;
        this->stade=stade;
        this->ville = ville;
        this->adresse = adresse;
        this->staff_technique = staff_technique;
        this->entraineur = entraineur;

    }

    Club::~Club(){}


    void Club::ajout_Palmares(Palmares* palmares){
        this->palmares.push_back(palmares);
        this->entraineur->addtitre(new Titre_gagner(this,this->palmares.back()));
    }

    void Club::ajout_joueur(Joueur* joueur){
        this->effectif.push_back(joueur);
    }
    void Club::ajout_personne(Personne* personne){
        this->staff_technique.push_back(personne);
    }



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

    tm Club::getDate(){

        return this->date;
    }

    void Club::setDate(tm date){

       this->date = date;
    }

    vector<Joueur*> Club::getListeJoueurs(){

        return this->effectif;

    }

    void Club::setListeJoueurs(vector<Joueur*> liste){

        this->effectif = liste;
    }
    
    std::vector<Palmares*> Club::getPalmares(){

        return this->palmares;

    }

    void Club::setPalmares(std::vector<Palmares*> palma){

        this->palmares = palma;

    }

    void Club::setStade(Stade* stade){

        this->stade = stade;

    }

    Stade* Club::getStade(){

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

   void Club::setStaffTechnique(vector<Personne*> staff_technique){

       this->staff_technique = staff_technique;

   }

   vector<Personne*> Club::getStaffTechnique(){

       return this->staff_technique;

   }

    void Club::setentraineur(Entraineur* entraineur){
       this->entraineur=entraineur;
    }
    Entraineur* Club::getentraineur(){
        return this->entraineur;
    }



