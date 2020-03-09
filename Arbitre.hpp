

#ifndef ARBITRE_H
#define ARBITRE_H

#include <string>
#include "Sportif.hpp"

class Arbitre : Sportif{


    private:

    std::string lieuObtentionDiplome;
    int experienceArbitrage;

    public:

    Arbitre();
    Arbitre(std::string,std::string,std::string, int);
    ~Arbitre();

    std::string getLieuObtentionDiplome();
    void setLieuObtentionDiplome(std::string);

    int getExperienceArbitrage();
    void setExperienceArbitrage(int);

};

#endif