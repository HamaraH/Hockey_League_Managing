#ifndef TITRE_GAGNE_H
#define TITRE_GAGNE_H


#include "Palmares.hpp"
#include "Club.hpp"

class Titre_gagne{

    private: 
        Club* club;
        Palmares* palmares;

    public:
        Titre_gagne();
        Titre_gagne(Club*,Palmares*);
        ~Titre_gagne();

        Club* getClub();
        void setClub(Club* club);

        Palmares* getPalmares();
        void setPalmares(Palmares*);

};

#endif