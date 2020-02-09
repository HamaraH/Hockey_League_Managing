#include <string>
#include "Palmares.hpp"

using namespace std;

    Palmares::Palmares(){}

    Palmares::Palmares(string titre, string date){
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

    void Palmares::setDate(string date){
        this->Date = date;
    }

    string Palmares::getDate(){
        return this->Date;
    }
    