#include <iostream>
#include <string>
#include "Club.hpp"

using namespace std;

    Club::Club(){}

    Club::Club(string histoire, string couleur,std::tm date,vector<Joueur*> liste,std::vector<Palmares*> palmares,Stade* stade, string ville, string adresse,vector<Personne*> staff_technique){

        this->histoire=histoire;
        this->couleur=couleur;
        this->date=date;
        this->effectif=liste;
        this->palmares=palmares;
        this->stade=stade;
        this->ville = ville;
        this->adresse = adresse;
        this->staff_technique = staff_technique;
    }

    Club::Club(std::string histoire, std::string couleur,std::tm, Stade* stade, std::string ville, std::string adresse){
        this->histoire=histoire;
        this->couleur=couleur;
        this->date=date;
        this->stade=stade;
        this->ville = ville;
        this->adresse = adresse;
    }


    Club::~Club(){
        
        for(int i=1;i<this->getListeJoueurs().size();i++){
            this->getListeJoueurs()[this->getListeJoueurs().size() -1]->~Joueur();
            this->getListeJoueurs().pop_back();
        }
        for(int i=1;i<this->getPalmares().size();i++){
            this->getPalmares()[this->getPalmares().size()-1]->~Palmares();
            this->getPalmares().pop_back();
        }
        for(int i=1;i<this->getStaffTechnique().size();i++){
            this->getStaffTechnique()[this->getStaffTechnique().size()-1]->~Personne();
            this->getStaffTechnique().pop_back();
        }
        std::cout<<"fin staff\n";
    }


    void Club::ajout_Palmares(Palmares* palmares){
        this->palmares.push_back(palmares);
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



