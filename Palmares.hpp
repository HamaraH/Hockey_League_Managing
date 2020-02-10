#ifndef PALMARES_H
#define PALMARES_H

#include <string>
#include <ctime>

class Palmares{

    private:

    std::string Titre;
    std::tm Date;

    public:

    Palmares();
    Palmares(std::string titre, std::tm date);
    ~Palmares();

    std::string getTitre();
    void setTitre(std::string titre);

    std::tm getDate();
    void setDate(std::tm date);

};

#endif