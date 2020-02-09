
#include <iostream>
#include <string>

#include "Club.hpp"
#include "Joueur.hpp"
#include "Palmares.hpp"
#include "Stade.hpp"
#include "Personne.hpp"

using namespace std;

int main(){

     Joueur* j1 = new Joueur("Hoerner","Leonie",1.62,60.0,"Metz"); 
     Joueur* j2 = new Joueur("Ramm","Arno",1.85,78.0,"Le Ban Saint Martin"); 
     vector<Joueur> liste;

     Palmares* p1 = new Palmares("coupe du monde","01/01/01");
     
     Stade* stade = new Stade(500,"gazon","Stade du RU","57 rue du ru");

     Personne* personne1 = new Personne("RAMM", 27, "directeur");
     vector<Personne> staff;

    staff.push_back(*personne1);

    liste.push_back(*j1);
    liste.push_back(*j2);
   
    Club* club = new Club("oui denis","rouge",liste,*p1,*stade, "Metz", "23 rue des lauriers", staff);

    club->getListeJoueurs().at(0).toString();
    cout<< club->getPalmares().getTitre();
    cout<< club->getStade().getAdresse();
    cout<< club->getStaffTechnique().at(0).getNom();

 
    
    


}