#include "LigueHockey.hpp"
        LigueHockey::LigueHockey(){
        }

        LigueHockey::LigueHockey(std::vector<Club*> clubs, std::vector<Stade*> stades, std::vector<Entraineur*> entraineurs){
            this->clubs=clubs;
            this->stades=stades;
            this->entraineurs=entraineurs;
        }

        LigueHockey::~LigueHockey(){
        }

        void LigueHockey::addclub(Club* club){
            this->clubs.push_back(club);
        }
        void LigueHockey::addstade(Stade* stade){
            this->stades.push_back(stade);
        }
        void LigueHockey::addentaineur(Entraineur* entraineur){
            this->entraineurs.push_back(entraineur);
        }

        void LigueHockey::destroy(int choix){
            this->clubs.erase(this->clubs.begin()+choix);
        }



        std::vector<Club*> LigueHockey::getclubs(){
            return this->clubs;
        }
        void LigueHockey::setclubs(std::vector<Club*> club){
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
