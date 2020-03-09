
#include "..\HPP\Match.hpp"

Match::Match(){}

Match::Match(Equipe* equipe1, Equipe* equipe2, std::vector<Periode*> liste_periode, Resultat* resultat){

    this->equipeLocale = equipe1;
    this->equipeInvitee = equipe2;
    this->listePeriode = liste_periode;
    this->resultatFinal = resultat;

}

Match::~Match(){}

Equipe* Match::getEquipeLocale(){

    return this->equipeLocale;

}

void Match::setEquipeLocale(Equipe* equipe){

    this->equipeLocale = equipe;

}

Equipe* Match::getEquipeInvitee(){

    return this->equipeInvitee;

}

void Match::setEquipeInvitee(Equipe* equipe){

    this->equipeInvitee = equipe;

}

std::vector<Periode*> Match::getListePeriode(){

    return this->listePeriode;

}

void Match::setListePeriode(std::vector<Periode*> liste_periode){

    this->listePeriode = liste_periode;

}


Resultat* Match::getResultatFinal(){

    return this->resultatFinal;

}

void Match::setResultatFinal(Resultat* resultat){

    this->resultatFinal = resultat;

}
