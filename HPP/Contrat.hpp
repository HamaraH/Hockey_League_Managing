#ifndef CONTRAT_H
#define CONTRAT_H

#include "ctime"

#include "Reglement.hpp"
#include "Joueur.hpp"

class Contrat{

    private :

        Joueur* joueurContractant;

    public :

    Contrat();
    Contrat(Joueur*);
    ~Contrat();

    Joueur* getJoueurContractant();
    void setJoueurContractant(Joueur*);

};

#endif