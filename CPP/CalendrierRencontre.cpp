#include "..\HPP\CalendrierRencontre.hpp"

CalendierRencontre::CalendierRencontre(){}
CalendierRencontre::CalendierRencontre(int annee){
    this->annee=annee;
}
CalendierRencontre::CalendierRencontre(int annee, std::vector<Rencontre> rencontres){
    this->annee=annee;
    this->rencontres=rencontres;
}

CalendierRencontre::~CalendierRencontre(){}

int CalendierRencontre::getAnnee(){
    return this->annee;
}
void CalendierRencontre::setAnnee(int annee){
    this->annee=annee;
}
std::vector<Rencontre> CalendierRencontre::getRencontres(){
    return this->rencontres;
}
void CalendierRencontre::setRencontres(std::vector<Rencontre> rencontres){
    this->rencontres=rencontres;
}
