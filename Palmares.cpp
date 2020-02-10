#include <string>
#include "Palmares.hpp"

using namespace std;

    Palmares::Palmares(){}

    Palmares::Palmares(string titre, std::tm date){
        this->Titre = titre;
        this->Date = date;
    }

    Palmares::~Palmares(){}

    void Palmares::setTitre(string titre){
        this->Titre = titre;
    }

    string Palmares::getTitre(){
        return this->Titre;
    }

    void Palmares::setDate(std::tm date){
        this->Date = date;
    }

    tm Palmares::getDate(){
        return this->Date;
    }
    