#ifndef MATCH_H
#define MATCH_H

#include <vector>

#include "Equipe.hpp"
#include "Periode.hpp"
#include "Resultat.hpp"

class Match{


    private:

    Equipe* equipeLocale;
    Equipe* equipeInvitee;
    std::vector<Periode*> listePeriode;
    Resultat* resultatFinal;

    public:

    Match();
    Match(Equipe*, Equipe*, std::vector<Periode*>, Resultat*);
    ~Match();

    Equipe* getEquipeLocale();
    void setEquipeLocale(Equipe*);

    Equipe* getEquipeInvitee();
    void setEquipeInvitee(Equipe*);

    std::vector<Periode*> getListePeriode();
    void setListePeriode(std::vector<Periode*>);

    Resultat* getResultatFinal();
    void setResultatFinal(Resultat*);



};

#endif