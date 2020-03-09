#include "../HPP/Rencontre.hpp"

    Rencontre::Rencontre(){}
    
    Rencontre::Rencontre(std::tm date,Club* local, Club* invite){
        this->date=date;
        this->local=local;
        this->invite=invite;
    }

    Rencontre::Rencontre(std::tm date,Club* local, Club* invite, Match match){
        this->date=date;
        this->local=local;
        this->invite=invite;
        this->match=match;
    }

    Rencontre::~Rencontre(){}

    std::tm Rencontre::getDate(){
        return this->date;
    }
    void Rencontre::setDate(std::tm date){
        this->date = date;
    }
    Club* Rencontre::getLocal(){
        return this->local;
    }
    void Rencontre::setLocal(Club* local){
        this->local=local;
    }
    Club* Rencontre::getInvite(){
        return this->invite;
    }
    void Rencontre::setInvite(Club* invite){
        this->invite=invite;
    }
    Match Rencontre::getMatch(){
        return this->match;
    }
    void Rencontre::setMatch(Match match){
        this->match=match;
    }
