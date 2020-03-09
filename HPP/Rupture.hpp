
#ifndef RUPTURE_H
#define RUPTURE_H

#include "string"

#include "Joueur.hpp"
#include "Club.hpp"

class Rupture{


    private :

    Joueur* joueur;
    std::string raisonsDepart;
    Club* nouveauClub;
    float penalite;

    public :

    Rupture();
    Rupture(Joueur*, std::string, Club*, float);
    ~Rupture();

    Joueur* getJoueur();
    void setJoueur(Joueur*);

    std::string getRaisonsDepart();
    void setRaisonsDepart(std::string);

    Club* getNouveauClub();
    void setNouveauClub(Club*);

    float getPenalite();
    void setPenalite(float);


};

#endif