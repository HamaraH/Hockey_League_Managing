#ifndef CREATION_H
#define CREATION_H

#include <iostream>
#include <string>
#include <vector>

#include "LigueHockey.hpp"
#include "Contrat_engagement.hpp"
#include "Joueur_non_autonome.hpp"

class Creation{

    public:

        static void club(LigueHockey*);
        static void entraineur(LigueHockey*);
        static Joueur* joueur();
        static void palmares(Club*,Entraineur*);
        static void palmares(LigueHockey*,Club*);
        static Parcours* parcours(); 
        static Personne* personne();
        static void stade(LigueHockey*);
        static tm date();


        static void calendrierRencontre(LigueHockey*);
        static Rencontre* rencontre(LigueHockey*);
        static Match match(Rencontre*);
        static Resultat* resultat(std::vector<Periode*>);
        static Periode* periode();
        static Equipe* equipe(Club*);
        
        static Contrat_engagement* contrat_engagement(LigueHockey*, Club*, Club*, Joueur*);
        static Contrat_engagement* contrat_engagement(LigueHockey*);
        static Rupture* rupture(LigueHockey*, Joueur*, Club*);

        static Reglement* reglement();

        static Joueur_non_autonome* joueur_non_autonome();

};

class Afficher{

    public:

        static void club (Club*);
        static void entraineur(Entraineur*);
        static void joueur(Joueur*);
        static void palmares(Palmares*);
        static void parcours(Parcours*);
        static void personne(Personne*);
        static void stade(Stade*);
        static void titre_gagne(Titre_gagne*);
        
        static void joueurduclub(Club*);

        static void calendrierRencontre(CalendierRencontre*);
        static void rencontre(Rencontre*);
        static void match(Match);
        static void resultat(Resultat*);
        static void periode(Periode*);
        static void equipe(Equipe*);
        
        static void contrat_engagement(Contrat_engagement*);
        static void reglement(Reglement*);

        static void RencontreClub(LigueHockey*,Club*);
        static void MontantEncaisse(Club*);


};

class Traitement{

    public:

        static int ApplicationBody();

        static Entraineur* entraineurTitre(LigueHockey*);
        static Club* clubTitre(LigueHockey*);
        static Club* chooseClub(LigueHockey*);
        static Joueur* chooseJoueur(Club*);

        static CalendierRencontre* chooseCalendrier(LigueHockey*);
        static Rencontre* chooseRencontre(CalendierRencontre*);
        static void ajoutTransfert(LigueHockey*);

};



#endif