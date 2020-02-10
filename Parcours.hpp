#ifndef PARCOURS_H
#define PARCOURS_H

#include <string>
#include <ctime>

class Parcours{

    private:

    std::string nom_club;
    std::tm date;

    public:

    Parcours();
    Parcours(std::string nom, std::tm date);
    ~Parcours();

    std::string getNomClub();
    void setNomClub(std::string nom);
    
    std::tm getDate();
    void setDate(std::tm date);


};



#endif