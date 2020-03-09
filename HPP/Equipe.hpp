#ifndef EQUIPE_H
#define EQUIPE_H

#include "Club.hpp"
#include "Joueur.hpp"

class Equipe{

    private:

    Club* club;
    int nbJoueurs;
    int nbGardiens;
    Joueur* capitaineEquipe;

    public:

    Equipe();
    Equipe(Club*, int, int, Joueur*);
    ~Equipe();

    Club* getClub();
    void setClub(Club*);

    int getNbJoueurs();
    void setNbJoueurs(int);

    int getNbGardiens();
    void setNbGardiens(int);

    Joueur* getCapitaineEquipe();
    void setCapitaineEquipe(Joueur*);

};


#endif