
#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

class Personne{

    private:

    std::string nom;
    int age;
    std::string role;


    public:

    Personne();
    Personne(std::string nom, int age, std::string role);
    ~Personne();

    void setNom(std::string nom);
    std::string getNom();

    void setAge(int age);
    int getAge();
    
    void setRole(std::string role);
    std::string getRole();

};

#endif