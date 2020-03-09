#ifndef HOCKEY_H
#define HOCKEY_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "Joueur.hpp"
#include "Palmares.hpp"

class Hockey{

    private: 

    std::string Histoire;
    std::string Couleur;
    std::string Date;
    std::vector<Joueur> Liste_joueurs;
    Palmares Palma;

    public:

    Hockey(std::string histoire, std::string couleur,std::vector<Joueur> liste, Palmares palma);
    void printHistoire();
    std::string getHistoire();
    void setHistoire(std::string histoire);
    std::string getCouleur();
    void setCouleur(std::string couleur);
    std::string getDate();
    void setDate(std::string couleur);
    std::vector<Joueur> getListeJoueurs();
    void setListeJoueurs(std::vector<Joueur> liste);
    

};

#endif