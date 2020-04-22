#include "../HPP/Negociateur.hpp"

Club* Negociateur::getRepresentant(){
    return this->representantClub;
}
void Negociateur::setRepresantant(Club* rep){
    this->representantClub=rep;
}

double Negociateur::getDesire(){
    return this->desire;
}
void Negociateur::setDesire(double desire){
    this->desire=desire;
}