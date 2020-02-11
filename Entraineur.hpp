#ifndef ENTRAINEUR_H
#define ENTRAINEUR_H


#include "Titre_gagne.hpp"
#include <vector>
#include <string>

class Entraineur{

    private: 
        std::string nom;
        std::string prenom;
        std::string lieu_grade;
        std::vector<Titre_gagne*> titres;

    public:

    Entraineur();
    Entraineur(std::string,std::string,std::string);
    Entraineur(std::string,std::string,std::string,std::vector<Titre_gagne*>);
    ~Entraineur();

    void addtitre(Titre_gagne*);
    std::vector<Titre_gagne*> gettitre_club(Club* club);
    std::vector<Titre_gagne*> gettitre_palmares(std::string);

    std::string getnom();
    void setnom(std::string);
    std::string getprenom();
    void setprenom(std::string);
    std::string getlieu_grade();
    void setlieu_grade(std::string);
    std::vector<Titre_gagne*> gettitres();
    void settitres(std::vector<Titre_gagne*>);

};

#endif