#ifndef STADE_H
#define STADE_H

#include <string>

class Stade{

    private: 

    int Capacite;
    std::string Qualite;
    std::string Nom;
    std::string Adresse;


    public:

    Stade();
    Stade (int capacite, std::string qualite, std::string nom, std::string adresse);
    ~Stade();

    void setcapacite(int capac);
    int getCapacite();

    void setQualite(std::string qualite);
    std::string getQualite();

    void setNom(std::string nom);
    std::string getNom();
    
    void setAdresse(std::string adresse);
    std::string getAdresse();
    
};

#endif