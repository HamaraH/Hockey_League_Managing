#ifndef PALMARES_H
#define PALMARES_H

#include <string>

class Palmares{

    private:

    std::string Titre;
    std::string Date;

    public:
    Palmares();
    Palmares(std::string titre, std::string date);
    std::string getTitre();
    void setTitre(std::string titre);
    std::string getDate();
    void setDate(std::string titre);
   


};

#endif