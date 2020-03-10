
#ifndef RUPTURE_H
#define RUPTURE_H

#include "string"

#include "Joueur.hpp"
#include "Club.hpp"
#include "Contrat.hpp"

class Rupture : public Contrat{


    private :

    std::string raisonsDepart;
    Club* nouveauClub;
    float penalite;

    public :

    Rupture();
    Rupture(std::string, Club*, float);
    Rupture(Joueur*, std::string, Club*, float);
    ~Rupture();

    std::string getRaisonsDepart();
    void setRaisonsDepart(std::string);

    Club* getNouveauClub();
    void setNouveauClub(Club*);

    float getPenalite();
    void setPenalite(float);


};

#endif