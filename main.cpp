#include <iostream>
#include <string>
#include "Hockey.hpp"
#include "Joueur.hpp"
#include "Palmares.hpp"

using namespace std;

int main(){

     Joueur* j1 = new Joueur("Hoerner","Leonie",1.62,60.0,"Metz"); 
     Joueur* j2 = new Joueur("Ramm","Arno",1.85,78.0,"Le Ban Saint Martin"); 
     Palmares* p1 = new Palmares("coupe du monde","01/01/01");
     cout << p1->getTitre() << "\n";
     /*j1->toString();

     cout <<"\n";

     j2->toString();

    cout <<"\n";*/

    std::vector<Joueur> liste;

    liste.push_back(*j1);
    liste.push_back(*j2);
   
    Hockey* club = new Hockey("oui denis","rouge",liste,*p1);

    club->getListeJoueurs().at(0).toString();
    club->getListeJoueurs().at(1).toString();
    
    


}