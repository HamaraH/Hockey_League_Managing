#include "LigueHockey.hpp"
        LigueHockey::LigueHockey(){
            this->score_victoire=3;
            this->score_null=1;
            this->score_defaite=0;
        }
        LigueHockey::LigueHockey(int victoire,int null,int defaite){
            this->score_victoire=victoire;
            this->score_null=null;
            this->score_defaite=defaite;
        }
        LigueHockey::LigueHockey(int victoire, int null,int defaite,std::vector<Clubscore*> clubs){
            this->score_victoire=victoire;
            this->score_null=null;
            this->score_defaite=defaite;
            this->clubs=clubs;
        }
        LigueHockey::~LigueHockey(){
        }

        void LigueHockey::addclub(Clubscore* club){
            this->clubs.push_back(club);
        }
        std::vector<Clubscore*> LigueHockey::getclubs(){
            return this->clubs;
        }
        void LigueHockey::setclubs(std::vector<Clubscore*> club){
            this->clubs=clubs;
        }
        int LigueHockey::getscore_victoire(){
            return this->score_victoire;
        }
        void LigueHockey::setscore_victoire(int victoire){
            this->score_victoire=victoire;
        }
        int LigueHockey::getscore_defaite(){
            return this->score_defaite;
        }
        void LigueHockey::setscore_defaite(int defaite){
            this->score_defaite=defaite;
        }
        int LigueHockey::getscore_null(){
            return this->score_null;
        }
        void LigueHockey::setscore_null(int null){
            this->score_null=null;
        }
