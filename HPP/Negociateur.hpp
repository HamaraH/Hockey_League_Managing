#ifndef NEGOCIATEUR_H
#define NEGOCIATEUR_H

#include "Club.hpp"

class Negociateur{

    protected:

        Club* representantClub;
        double desire;

    
    public:

        Club* getRepresentant();
        void setRepresantant(Club*);

        double getDesire();
        void setDesire(double);


};


#endif