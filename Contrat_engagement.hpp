#ifndef CONTRAT_ENGAGEMENT_H
#define CONTRAT_ENGAGEMENT_H

#include <ctime>

#include "Club.hpp"
#include "Contrat.hpp"

class Contrat_engagement : public Contrat{

    private:

    Club* clubContractant;
    Club* clubLibere;

    public:

    Contrat_engagement();
    Contrat_engagement(Club*, Club*);
    Contrat_engagement(Club*, Club*,Joueur*, int, tm, Reglement*, tm);
    ~Contrat_engagement();

    Club* getClubContractant();
    void setClubContractant(Club*);

    Club* getClubLibere();
    void setClubLibere(Club*);

};


#endif