#ifndef CREATION_H
#define CREATION_H

#include <iostream>
#include <string>
#include <vector>

#include "LigueHockey.hpp"

class Creation{

    public:

        static Club* club(std::vector<Entraineur*>,std::vector<Stade*>);
        static Clubscore* clubscore(std::vector<Club*>);
        static Entraineur* entraineur();
        static Joueur* joueur(); //manquera le parcours du joueur ARNO
        static Palmares* palmares();
        static Personne* personne();
        static Stade* stade();
        static Titre_gagner* titre_gagner(); 

};

class Afficher{

    public:

        static void club (Club*);
        static void clubscore(Clubscore*);
        static void entraineur(Entraineur*);
        static void joueur(Joueur*);
        static void palmares(Palmares*);
        static void personne(Personne*);
        static void stade(Stade*);
        static void titre_gagner(Titre_gagner*);// manque la methode affichage parcours

        static void entraineurTitre(std::vector<Entraineur*>);// a voire si je prend pas LigueHockey
        static void clubTitre(std::vector<Club*>); // la même
};



#endif