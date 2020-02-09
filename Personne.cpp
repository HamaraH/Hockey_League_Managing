
#include <string>

#include "Personne.hpp"

using namespace std;

Personne::Personne(){}

Personne::Personne(string nom, int age, string role){

    this->nom = nom;
    this->age = age;
    this->role = role;

}

Personne::~Personne(){}

void Personne::setNom(string nom){

    this->nom = nom;

}
string Personne::getNom(){

    return this->nom;

}

void Personne::setAge(int age){

    this->age = age;

}

int Personne::getAge(){

    return this->age;

}

void Personne::setRole(string role){

    this->role = role;

}

string Personne::getRole(){

    return this->role;

}