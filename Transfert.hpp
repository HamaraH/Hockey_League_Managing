#ifndef TRANSFERT_H
#define TRANSFERT_H

#include <ctime>

#include "Joueur.hpp"
#include "Club.hpp"
#include "Reglement.hpp"

class Transfert{

    private:

    Joueur* joueurContractant;
    Club* clubContractant;
    Club* clubLibere;
    int dureeContrat;
    tm dateEntree;
    Reglement* reglement;
    tm dateContrat;


    public:

    Transfert();
    Transfert(Joueur*, Club*, Club*, int, tm, Reglement*, tm);
    ~Transfert();

    Joueur* getJoueurContractant();
    void setJoueurContractant(Joueur*);

    Club* getClubContractant();
    void setClubContractant(Club*);

    Club* getClubLibere();
    void setClubLibere(Club*);

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