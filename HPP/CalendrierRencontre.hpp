#ifndef CALENDRIERRENCONTRE_H
#define CALENDRIERRENCONTRE_H

#include "Rencontre.hpp"


class CalendierRencontre{

    private :
      int annee;
      std::vector<Rencontre*> rencontres;

    public :

    CalendierRencontre();
    CalendierRencontre(int annee);
    CalendierRencontre(int annee, std::vector<Rencontre*> rencontres);
    ~CalendierRencontre();

    void addRencontre(Rencontre*);

    int getAnnee();
    void setAnnee(int annee);
    std::vector<Rencontre*> getRencontres();
    void setRencontres(std::vector<Rencontre*> rencontres);


};


#endif