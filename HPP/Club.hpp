#ifndef CLUB_H
#define CLUB_H

#include <ctime>
#include <vector>

#include "Joueur.hpp"
#include "Palmares.hpp"
#include "Stade.hpp"
#include "Personne.hpp"
#include "Transfert.hpp"


class Club{

    private: 

    std::string histoire;
    std::string couleur;
    std::tm date;
    std::vector<Joueur*> effectif;
    std::vector<Palmares*> palmares;
    Stade* stade;
    std::string ville;
    std::string adresse;
    std::vector<Personne*> staff_technique;
    std::vector<Transfert*> listeTransfert;

    public:

    Club();
    Club(std::string histoire, std::string couleur,std::tm,std::vector<Joueur*> liste, std::vector<Palmares*> palmares, Stade* stade, std::string ville, std::string adresse, std::vector<Personne*> staff_technique);
    Club(std::string histoire, std::string couleur,std::tm, Stade* stade, std::string ville, std::string adresse);
    ~Club();
    
    void ajout_Palmares(Palmares*);
    void ajout_joueur(Joueur*);
    void ajout_personne(Personne*);


    std::string getHistoire();
    void setHistoire(std::string histoire);

    std::string getCouleur();
    void setCouleur(std::string couleur);

    std::tm getDate();
    void setDate(std::tm date);

    std::vector<Joueur*> getListeJoueurs();
    void setListeJoueurs(std::vector<Joueur*> liste);

    void setPalmares(std::vector<Palmares*> palma);
    std::vector<Palmares*> getPalmares();

    void setStade(Stade* stade);
    Stade* getStade();

    void setVille(std::string ville);
    std::string getVille();

    void setAdresse(std::string adresse);
    std::string getAdresse();

    void setStaffTechnique(std::vector<Personne*> staff_technique);
    std::vector<Personne*> getStaffTechnique();

    void setListeTransfert(std::vector<Transfert*> liste_transfert);
    std::vector<Transfert*> getListeTransfert();


};

#endif