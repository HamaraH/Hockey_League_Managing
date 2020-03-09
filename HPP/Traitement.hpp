#ifndef CREATION_H
#define CREATION_H

#include <iostream>
#include <string>
#include <vector>

#include "LigueHockey.hpp"

class Creation{

    public:

        static void club(LigueHockey*);
        static void entraineur(LigueHockey*);
        static Joueur* joueur();
        static void palmares(Club*,Entraineur*);
        static void palmares(LigueHockey*,Club*);
        static Parcours* parcours(); 
        static Personne* personne();
        static void stade(LigueHockey*);
        static tm date();

};

class Afficher{

    public:

        static void club (Club*);
        static void entraineur(Entraineur*);
        static void joueur(Joueur*);
        static void palmares(Palmares*);
        static void parcours(Parcours*);
        static void personne(Personne*);
        static void stade(Stade*);
        static void titre_gagne(Titre_gagne*);
        static void joueurduclub(Club*);

};

class Traitement{

    public:

        static Entraineur* entraineurTitre(LigueHockey*);
        static Club* clubTitre(LigueHockey*);

};



#endif