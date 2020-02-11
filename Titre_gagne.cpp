#include "Titre_gagne.hpp"
    
    Titre_gagne::Titre_gagne(){
        this->club=NULL;
        this->palmares=NULL;
    }
    
    Titre_gagne::Titre_gagne(Club* club,Palmares* palmares){
        this->club=club;
        this->palmares=palmares;
    }

    Titre_gagne::~Titre_gagne(){
    }


    Club* Titre_gagne::getClub(){
        return this->club;
    }
    void Titre_gagne::setClub(Club* club){
        this->club=club;
    }
    
    Palmares* Titre_gagne::getPalmares(){
        return this->palmares;
    }
    void Titre_gagne::setPalmares(Palmares* palmares){
        this->palmares=palmares;
    }