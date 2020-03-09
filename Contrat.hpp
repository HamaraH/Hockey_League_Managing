#ifndef CONTRAT_H
#define CONTRAT_H

#include "ctime"

#include "Reglement.hpp"
#include "Joueur.hpp"

class Contrat{

    private :

        Joueur* joueurContractant;
        int dureeContrat;
        tm dateEntree;
        Reglement* reglement;
        tm dateContrat;

    public :

    Contrat();
    Contrat(Joueur*, int, tm, Reglement*, tm);
    ~Contrat();

    Joueur* getJoueurContractant();
    void setJoueurContractant(Joueur*);
    
    int getDureeContrat();
    void setDureeContrat(int);

    tm getDateEntree();
    void setDateEntree(tm);

    Reglement* getReglement();
    void setReglement(Reglement*);

    tm getDateContrat();
    void setDateContrat(tm);

};

#endif