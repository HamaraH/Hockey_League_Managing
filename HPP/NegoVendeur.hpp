#ifndef NEGOVENDEUR_H
#define NEGOVENDEUR_H
#include "Negociateur.hpp"

class NegoVendeur : public Negociateur{

    private:
        
        double min;

    public:

        NegoVendeur();
        NegoVendeur(Club*,double,double);
        ~NegoVendeur();
        

        double getMin();
        void setMin(double);

};


#endif