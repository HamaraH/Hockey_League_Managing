#ifndef TITRE_GAGNER_H
#define TITRE_GAGNER_H


#include "Palmares.hpp"
#include "Hockey.hpp"

class Titre_gagner{

    private: 
        Hockey* club;
        Palmares* palmares;

    public:
        Titre_gagner();
        Titre_gagner(Hockey*,Palmares*);
        ~Titre_gagner();

        Hockey* getclub();
        void setclub(Hockey*);
        Palmares* getpalmares();
        void setpalmares(Palmares*);

};

#endif