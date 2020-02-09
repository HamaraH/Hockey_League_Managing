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

class Club{

    private: 

    std::string histoire;
    std::string couleur;
    std::string date;
    std::vector<Joueur> effectif;
    Palmares palmares;
    Stade stade;
    std::string ville;
    std::string adresse;
    std::vector<Personne> staff_technique;

    public:

    Club();
    Club(std::string histoire, std::string couleur,std::vector<Joueur> liste, Palmares palmares, Stade stade, std::string ville, std::string adresse, std::vector<Personne> staff_technique);
    ~Club();
    
    std::string getHistoire();
    void setHistoire(std::string histoire);

    std::string getCouleur();
    void setCouleur(std::string couleur);

    std::string getDate();
    void setDate(std::string couleur);

    std::vector<Joueur> getListeJoueurs();
    void setListeJoueurs(std::vector<Joueur> liste);

    void setPalmares(Palmares palma);
    Palmares getPalmares();

    void setStade(Stade stade);
    Stade getStade();

    void setVille(std::string ville);
    std::string getVille();

    void setAdresse(std::string adresse);
    std::string getAdresse();

    void setStaffTechnique(std::vector<Personne> staff_technique);
    std::vector<Personne> getStaffTechnique();

};

#endif