#ifndef NEGOACHETEUR_H
#define NEGOACHETEUR_H

#include "Negociateur.hpp"

class NegoAcheteur : public Negociateur{

    private:
        
        double max;

    public:

        NegoAcheteur();
        NegoAcheteur(Club*,double,double);
        ~NegoAcheteur();
        

        double getMax();
        void setMax(double);

};


#endif