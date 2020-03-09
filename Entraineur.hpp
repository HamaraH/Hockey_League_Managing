#ifndef ENTRAINEUR_H
#define ENTRAINEUR_H

#include <vector>
#include <string>

#include "Titre_gagne.hpp"
#include "Sportif.hpp"

class Entraineur : public Sportif{

    private: 

        std::string lieu_grade;
        std::vector<Titre_gagne*> titres;

    public:

    Entraineur();
    Entraineur(std::string, std::string, std::string, std::vector<Titre_gagne*>);
    Entraineur(std::string,std::string,std::string);
    ~Entraineur();

    void addTitre(Titre_gagne*);
    std::vector<Titre_gagne*> getTitreClub(Club* club);
    std::vector<Titre_gagne*> getTitrePalmares(std::string);

    std::string getLieuGrade();
    void setLieuGrade(std::string);

    std::vector<Titre_gagne*> getTitres();
    void setTitres(std::vector<Titre_gagne*>);

};

#endif