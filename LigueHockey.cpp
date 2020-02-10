#include "LigueHockey.hpp"
        LigueHockey::LigueHockey(){
        }

        LigueHockey::LigueHockey(std::vector<Clubscore*> clubs, std::vecotr<Stade*> stades, std::vector<Entraineur*> entraineurs){
            this->clubs=clubs;
            this->stades=stades;
            this->entraineurs=entraineurs;
        }

        LigueHockey::~LigueHockey(){
        }

        void LigueHockey::addclub(Clubscore* club){
            this->clubs.push_back(club);
        }
        void LigueHockey::addstade(Stade* stade){
            this->stades.push_back(stade);
        }
        void LigueHockey::addentaineur(Entraineur* entraienur){
            this->entraineurs.push_back(entraineur);
        }

        std::vector<Clubscore*> LigueHockey::getclubs(){
            return this->clubs;
        }
        void LigueHockey::setclubs(std::vector<Clubscore*> club){
            this->clubs=clubs;
        }
        std::vector<Stade*> LigueHockey::getstades(){
            return this->stades;
        }
        void LigueHockey::setstade(std::vector<Stade*> stades){
            this->stades =stades;
        }
        std::vector<Entraineur*> LigueHockey::getentraineurs(){
            return this->entraineurs;
        }
        void LigueHockey::setentraineurs(std::vector<Entraineur*> entraineurs){
            this->entraineurs = entraineurs;
        }
