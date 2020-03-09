#ifndef SPORTIF_H
#define SPORTIF_H

#include <string>

class Sportif{

    private:

        std::string nom;
        std::string prenom;

    public:
        
        Sportif();
        Sportif(std::string, std::string);
        ~Sportif();

        std::string getNom();
        void setNom(std::string);

        std::string getPrenom();
        void setPrenom(std::string);

};

#endif
