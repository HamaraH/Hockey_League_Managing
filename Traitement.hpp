#ifndef CREATION_H
#define CREATION_H

#include <iostream>
#include <string>
#include <vector>

#include "LigueHockey.hpp"

class Creation{

    public:

        static Club* club();
        static Clubscore* clubscore();
        static Entraineur* entraineur();
        static Joueur* joueur();
        static Palmares* palmares();
        static Personne* personne();
        static Stade* stade();
        static Titre_gagner* titre_gagner(); //manquera le parcours du joueur ARNO

};

class Afficher{

    public:

        static void stade(Stade*);
        static void entraineur(Entraineur*);
        static void palmares(Palmares*);
        static void club (Club*);
        static void personne (Personne);

};

#endif