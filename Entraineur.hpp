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

    void addTitre(Titre_gagne*);
    std::vector<Titre_gagne*> getTitreClub(Club* club);
    std::vector<Titre_gagne*> getTitrePalmares(std::string);

    std::string getNom();
    void setNom(std::string);
    std::string getPrenom();
    void setPrenom(std::string);
    std::string getLieuGrade();
    void setLieuGrade(std::string);
    std::vector<Titre_gagne*> getTitres();
    void setTitres(std::vector<Titre_gagne*>);

};

#endif