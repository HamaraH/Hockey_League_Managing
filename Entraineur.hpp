#ifndef ENTRAINEUR_H
#define ENTRAIEUR_H

#include <iostream>
#include <string>
#include <vector>

#include "Titre_gagner.hpp"

class Entraineur{

    private: 
        std::string nom;
        std::string prenom;
        std::string lieu_grade;
        std::vector<Titre_gagner*> titres;

    public:

    Entraineur();
    Entraineur(std::string,std::string,std::string);
    Entraineur(std::string,std::string,std::string,std::vector<Titre_gagner*>);
    ~Entraineur();

    void addtitre(Titre_gagner*);
    std::vector<Titre_gagner*> gettitre_club(Club*);
    std::vector<Titre_gagner*> gettitre_palmares(std::string);

    std::string getnom();
    void setnom(std::string);
    std::string getprenom();
    void setprenom(std::string);
    std::string getlieu_grade();
    void setlieu_grade(std::string);
    std::vector<Titre_gagner*> gettitres();
    void settitres(std::vector<Titre_gagner*>);

};

#endif