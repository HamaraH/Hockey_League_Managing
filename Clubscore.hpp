#ifndef CLUBSCORE_H
#define CLUBSCORE_H

#include "Club.hpp"

class Clubscore{
    
    private:
        int score;
        Club* club;

    public:

    Clubscore();
    Clubscore(Club*);
    ~Clubscore();

    int getscore();
    void setscore(int);
    Club* getclub();
    void setclub(Club*);


};


#endif