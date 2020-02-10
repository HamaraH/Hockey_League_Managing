#include "Clubscore.hpp"
  
    Clubscore::Clubscore(){
        this->club=NULL;
        this->score=0;
    }
    Clubscore::Clubscore(Club* club){
        this->club=club;
        this->score=0;
    }
    Clubscore::~Clubscore(){
    }

    int Clubscore::getscore(){
        return this->score;
    }
    void Clubscore::setscore(int score){
        this->score=score;
    }
    Club* Clubscore::getclub(){
        return this->club;
    }
    void Clubscore::setclub(Club* club){
        this->club=club;
    }