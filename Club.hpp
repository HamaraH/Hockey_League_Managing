#ifndef CLUB_H
#define CLUB_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "Joueur.hpp"
#include "Palmares.hpp"
#include "Stade.hpp"
#include "Personne.hpp"
#include "Entraineur.hpp"

class Club{

    private: 

    std::string histoire;
    std::string couleur;
    std::string date;
    std::vector<Joueur> effectif;
    std::vector<Palmares> palmares; // peut etre a convertir en tableau d'adresse -> si le cas faire gaffe aux destructreurs
    Stade stade;
    std::string ville;
    std::string adresse;
    std::vector<Personne> staff_technique;
    Entraineur* entraineur;

    public:

    Club();
    Club(std::string histoire, std::string couleur,std::vector<Joueur> liste, std::vector<Palmares> palmares, Stade stade, std::string ville, std::string adresse, std::vector<Personne> staff_technique, Entraineur* entraineur);
    ~Club();
    
    void ajout_Palmares(Palmares);


    std::string getHistoire();
    void setHistoire(std::string histoire);

    std::string getCouleur();
    void setCouleur(std::string couleur);

    std::string getDate();
    void setDate(std::string couleur);

    std::vector<Joueur> getListeJoueurs();
    void setListeJoueurs(std::vector<Joueur> liste);

    void setPalmares(std::vector<Palmares> palma);
    std::vector<Palmares> getPalmares();

    void setStade(Stade stade);
    Stade getStade();

    void setVille(std::string ville);
    std::string getVille();

    void setAdresse(std::string adresse);
    std::string getAdresse();

    void setStaffTechnique(std::vector<Personne> staff_technique);
    std::vector<Personne> getStaffTechnique();

    void setentraineur(Entraineur*);
    Entraineur* getentraineur();



};

#endif