#include "Titre_gagner.hpp"
    
    Titre_gagner::Titre_gagner(){
        this->club=NULL;
        this->palmares=NULL;
    }
    
    Titre_gagner::Titre_gagner(Club* club,Palmares* palmares){
        this->club=club;
        this->palmares=palmares;
    }

    Titre_gagner::~Titre_gagner(){
    }


    Club* Titre_gagner::getclub(){
        return this->club;
    }
    void Titre_gagner::setclub(Club* club){
        this->club=club;
    }
    
    Palmares* Titre_gagner::getpalmares(){
        return this->palmares;
    }
    void Titre_gagner::setpalmares(Palmares* palmares){
        this->palmares=palmares;
    }