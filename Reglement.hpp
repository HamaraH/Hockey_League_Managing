#ifndef REGLEMENT_H
#define REGLEMENT_H


#include <string>


class Reglement{


    private:

    float seuil;
    std::string descriptionDroits;
    float montantTransfert;
    float montantEncaisse;
    float montantRestant;

    public:

    Reglement();
    Reglement(float, std::string, float, float, float);
    ~Reglement();

    float getSeuil();
    void setSeuil(float);

    std::string getDescriptionDroits();
    void setDescriptionDroits(std::string);

    float getMontantTransfert();
    void setMontantTransfert(float);

    float getMontantEncaisse();
    void setMontantEncaisse(float);

    float getMontantRestant();
    void setMontantRestant(float);




};


#endif