#ifndef JOUEUR_NON_AUTONOME_H
#define JOUEUR_NON_AUTONOME_H

#include "string"
#include "vector"

#include "Joueur.hpp"

class Joueur_non_autonome : public Joueur{

    private :

    int nb_anne_min;

    public :

    Joueur_non_autonome(float, float, std::string, std::vector<Parcours*>,int, std::string, std::string);
    Joueur_non_autonome(float, float, std::string,int, std::string, std::string);

    Joueur_non_autonome();
    ~Joueur_non_autonome();

    int getNbAnneeMin();
    void setNbAnneeMin(int);

};

#endif