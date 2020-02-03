#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <string>


class Joueur{

    private:
        std::string Nom;
        std::string Prenom;
        float Taille;
        float Poids;
        std::string Ville;

    public:

    Joueur(std::string nom, std::string prenom, float taille, float poids, std::string ville);
    std::string getNom();
    void setNom(std::string nom);
    void setPrenom(std::string nom);
    std::string getPrenom();
    void setTaille(float taille);
    float getTaille();
    void setPoids(float poids);
    float getPoids();
    void setVille(std::string ville);
    std::string getVille();
    void toString();
    
};

#endif