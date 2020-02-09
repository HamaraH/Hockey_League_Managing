#include "Entraineur.hpp"


    Entraineur::Entraineur(){
        this->nom = "default_name";
        this->prenom = "default_surname";
        this->lieu_grade = "default_grade_area";
    }

    Entraineur::Entraineur(std::string nom,std::string prenom,std::string lieu_grade){
        this->nom=nom;
        this->prenom =prenom;
        this->lieu_grade=lieu_grade;
    }
    Entraineur::Entraineur(std::string nom,std::string prenom,std::string lieu_grade,std::vector<Titre_gagner> titres){
        this->nom=nom;
        this->prenom =prenom;
        this->lieu_grade=lieu_grade;
        this->titres=titres;
    }
    Entraineur::~Entraineur(){
    }

    void Entraineur::addtitre(Titre_gagner titre){
        this->titres.push_back(titre);
    }
    std::vector<Titre_gagner> Entraineur::gettitre_club(Club* club){
        std::vector<Titre_gagner> titre_du_club;
        for(int i=0;i<this->titres.size();i++){
            if(this->titres[i].getclub()==club){
                titre_du_club.push_back(this->titres[i]);
            }
        }
        return titre_du_club;
    }
    std::vector<Titre_gagner> Entraineur::gettitre_palmares(std::string titre){
        std::vector<Titre_gagner> titre_du_club;
        for(int i=0;i<this->titres.size();i++){
            if(this->titres[i].getpalmares()->getTitre()==titre){
                titre_du_club.push_back(this->titres[i]);
            }
        }
        return titre_du_club;
    }

    std::string Entraineur::getnom(){
        return this->nom;
    }
    void Entraineur::setnom(std::string nom){
        this->nom=nom;
    }
    std::string Entraineur::getprenom(){
        return this->prenom;
    }
    void Entraineur::setprenom(std::string prenom){
        this->prenom=prenom;
    }
    std::string Entraineur::getlieu_grade(){
        return this->lieu_grade;
    }
    void Entraineur::setlieu_grade(std::string lieu_grade){
        this->lieu_grade=lieu_grade;
    }
    std::vector<Titre_gagner> Entraineur::gettitres(){
        return this->titres;
    }
    void Entraineur::settitres(std::vector<Titre_gagner> titres){
        this->titres=titres;
    }