#ifndef LIGUEHOCKEY_H
#define LIGUEHOCKEY_H

#include "Clubscore.hpp"

class LigueHockey{
    
    private:
        std::vector<Clubscore*> clubs;
        int score_victoire;
        int score_defaite;
        int score_null;
    
    public:
        LigueHockey();
        LigueHockey(int, int ,int);
        LigueHockey(int, int,int, std::vector<Clubscore*>);
        ~LigueHockey();

        void addclub(Clubscore*);
        std::vector<Clubscore*> getclubs();
        void setclubs(std::vector<Clubscore*>);
        int getscore_victoire();
        void setscore_victoire(int);
        int getscore_defaite();
        void setscore_defaite(int);
        int getscore_null();
        void setscore_null(int);

};


#endif