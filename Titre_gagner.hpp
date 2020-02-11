#ifndef TITRE_GAGNER_H
#define TITRE_GAGNER_H


#include "Palmares.hpp"
#include "Club.hpp"

class Titre_gagner{

    private: 
        Club* club;
        Palmares* palmares;

    public:
        Titre_gagner();
        Titre_gagner(Club*,Palmares*);
        ~Titre_gagner();

        Club* getclub();
        void setclub(Club* club);
        Palmares* getpalmares();
        void setpalmares(Palmares*);

};

#endif