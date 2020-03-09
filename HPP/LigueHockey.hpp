#ifndef LIGUEHOCKEY_H
#define LIGUEHOCKEY_H

#include "Entraineur.hpp"
#include "CalendrierRencontre.hpp"

class LigueHockey{
    
    private:
        std::vector<Club*> clubs;
        std::vector<Stade*> stades;
        std::vector<Entraineur*> entraineurs;
        std::vector<CalendierRencontre*> calendriers;
        
    
    public:
        LigueHockey();
        LigueHockey(std::vector<Club*>,std::vector<Stade*>,std::vector<Entraineur*>);
        ~LigueHockey();

        void addclub(Club*);
        void addstade(Stade*);
        void addentaineur(Entraineur*);
        void addcalendrier(CalendierRencontre*);
        void destroy(Club*);

        std::vector<Club*> getclubs();
        void setclubs(std::vector<Club*>);
        std::vector<Stade*> getstades();
        void setstade(std::vector<Stade*>);
        std::vector<Entraineur*> getentraineurs();
        void setentraineurs(std::vector<Entraineur*>);

        std::vector<CalendierRencontre*> getCalendrier();
        void setCalendriers(std::vector<CalendierRencontre*>);


};


#endif