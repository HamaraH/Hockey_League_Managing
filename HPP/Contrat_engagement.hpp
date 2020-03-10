#ifndef CONTRAT_ENGAGEMENT_H
#define CONTRAT_ENGAGEMENT_H

#include <ctime>

#include "Club.hpp"
#include "Contrat.hpp"

class Contrat_engagement : public Contrat{

    private:

    Club* clubContractant;
    Club* clubLibere;
    int dureeContrat;
    tm dateEntree;
    Reglement* reglement;
    tm dateContrat;

    public:

    Contrat_engagement();
    Contrat_engagement(Joueur*,Club*, Club*, int, tm, Reglement*, tm);
    Contrat_engagement(Club*, Club*, int, tm, Reglement*, tm);
    ~Contrat_engagement();

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