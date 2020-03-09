#ifndef JOUEUR_H
#define JOUEUR_H


#include "Sportif.hpp"
#include "Parcours.hpp"

#include <iostream>
#include <string>
#include <vector>


class Joueur : public Sportif{

    private:

        float Taille;
        float Poids;
        std::string Ville;
        std::vector<Parcours*> parcours;

    public:

    Joueur();
    Joueur(std::string, std::string,float taille, float poids, std::string ville, std::vector<Parcours*>);
    Joueur(std::string, std::string,float taille, float poids, std::string ville);

    ~Joueur();

    void ajout_parcours(Parcours*);

    void setTaille(float taille);
    float getTaille();

    void setPoids(float poids);
    float getPoids();

    void setVille(std::string ville);
    std::string getVille();
    
    void toString();
    
};

#endif