#include "..\HPP\Traitement.hpp"

#include <iostream>
#include <stdio.h>

void Creation::club(LigueHockey* ligue){

    std::string histoire;
    std::string couleur;
    std::string ville;
    std::string adresse;
    tm localdate;
    Stade* stade;

    printf("Saisir l'histoire du club : ");
    std::cin>>histoire;
    getline(std::cin,histoire);
    printf("\nSaisir la couleur du club : ");
    getline(std::cin,couleur);
    printf("\nSaisir la ville du club : ");
    getline(std::cin,ville);
    printf("\nSaisir l'adresse du club : ");
    getline(std::cin,adresse);
    printf("\nDate de creation du club : ");
    localdate = Creation::date();
    
    bool creation_stade = true;
    if(ligue->getstades().size()>0){
        int choix;
        printf("\nTapez 1 pour selectionner un stade preexistant, sinon appuyez sur n'importe quel autre chiffre\n");
        std::cin>>choix;
        if(choix == 1){
            creation_stade ==false;
        }
    }
    if(!creation_stade){
        int choix;
        for(int i=0;i<ligue->getstades().size();i++){
            printf( "%d",i) ;
            Afficher::stade(ligue->getstades()[i]);
        }
        printf("Saisir le numero du stade\n");
        do{
            std::cin>>choix;
        }while(choix<0||choix>ligue->getstades().size());
        stade = ligue->getstades()[choix];
    }
    else{
        printf("\nCreation d'un stade : \n");
        Creation::stade(ligue);
        stade = ligue->getstades().back();
    }
    Club* club = new Club(histoire,couleur,localdate,stade,ville,adresse);
    printf("Voulez vous ajouter des joueurs? Veuillez entrer le nombre de joueurs\n");
    int nb_joueur;
    std::cin>>nb_joueur;
    for(int i=0;i<nb_joueur;i++){
        printf("Creation du joueur %d :\n",i+1);
        club->ajout_joueur(Creation::joueur());
    }


    printf("Voulez-vous ajouter du staff technique? Veuillez entrer le nombre de personne\n");
    int nb_staff;
    std::cin>>nb_staff;
    for(int i=0;i<nb_staff;i++){
        printf("Creation de la %d personne :\n",i+1);
        club->ajout_personne(Creation::personne());
    }
    
    printf("Voulez-vous ajouter des palmares? Veuillez entrer le nombre de palmares\n");
    int nb_palmares;
    std::cin>>nb_palmares;
    for(int i=0;i<nb_palmares;i++){
        printf("Creation du %d palmares :\n",i+1);
        Creation::palmares(ligue,club);
    }

    ligue->addclub(club);


}

void Creation::entraineur(LigueHockey* ligue){
    std::string name;
    std::string surname;
    std::string lieu_grade;
    
    printf("Saisir le nom de l'entraineur : \n");
    std::cin>>name;
    getline(std::cin,name);
    printf("Saisir le prenom de l'entraineur : \n");
    getline(std::cin,surname);
    printf("Saisir le lieu de grade : \n");
    getline(std::cin,lieu_grade);
    
    ligue->addentaineur(new Entraineur(name, surname,lieu_grade));
}    
Joueur* Creation::joueur(){
    std::string name;
    std::string surname;
    float taille;
    float poids;
    std::string ville;
    Joueur* joueur;
    std::string debug;
    getline(std::cin,debug);
    printf("Saisir le nom du joueur : \n");
    getline(std::cin,name);
    printf("Saisir le prenom du joueur  : \n");
    getline(std::cin,surname);
    printf("Saisir la ville du joueur : \n");
    getline(std::cin,ville);
    printf("Saisir la taille du joueur : \n");
    std::cin>>taille;
    printf("Saisir le poids du joueur : \n");
    std::cin>>poids;
    
    int autonome;
    std::cout<<"Le joueur est il autonome? (0 =non), autre = oui\n";
    if(autonome ==0){
        int nb_annee;
        std::cout<<"Saisir le nombre d'annee minimum de son contrat :\n";
        std::cin>>nb_annee;
        joueur = new Joueur_non_autonome(taille, poids,ville,nb_annee,name,surname);
    }
    else{
        joueur = new Joueur(name,surname,taille,poids,ville);
    }
    printf("Voulez vous ajouter des parcours? Entrer le nombre de parcours\n");
    int nb_parcours;
    std::cin>>nb_parcours;
    for(int i=0;i<nb_parcours;i++){
        printf("Creation du parcours %d :\n",i+1);
        joueur->ajout_parcours(Creation::parcours());
    }
    return joueur;
}
void Creation::palmares(Club* club, Entraineur* entraineur){
    std::string titre;

    printf("Saisir le titre du palamares : \n");
    std::cin>>titre;
    getline(std::cin,titre);

    Palmares* palmares = new Palmares(titre,Creation::date());
    club->ajout_Palmares(palmares);
    entraineur->addTitre(new Titre_gagne(club,palmares));
}

void Creation::palmares(LigueHockey* ligue,Club* club){
    Entraineur* entraineur;

    bool creation_entraineur = true;
    if(ligue->getentraineurs().size()>0){
        int choix;
        printf("Taper 1 pour selectionner un entraineur preexistant, sinon appuyez sur n'importe quelle autre touche\n");
        std::cin>>choix;
        if(choix == 1){
            creation_entraineur ==false;
        }
    }
    if(!creation_entraineur){
        int choix;
        for(int i=0;i<ligue->getentraineurs().size();i++){
            printf( "%d",i);
            Afficher::entraineur(ligue->getentraineurs()[i]);
        }
        printf("Saisir le numero de l'entraineur\n");
        do{
            std::cin>>choix;
        }while(choix<0||choix>ligue->getentraineurs().size());
        entraineur = ligue->getentraineurs()[choix];
    }
    else{
        printf("Creation d'un entraineur : \n");
        Creation::entraineur(ligue);
        entraineur = ligue->getentraineurs().back();
    }

    Creation::palmares(club,entraineur);


}

Parcours* Creation::parcours(){
    std::string nom_club;

    printf("Saisir le nom du club : \n");
    std::cin>>nom_club;
    getline(std::cin,nom_club);

    return new Parcours(nom_club,Creation::date());
}
Personne* Creation::personne(){
    std::string nom;
    int age;
    std::string fonction;
    printf("Saisir le nom de la personne : \n");
    std::cin>>nom;
    getline(std::cin,nom);
    printf("Saisir l'age de la personne : \n");
    std::cin>>age;
    printf("Saisir la fonction de la personne : \n");
    std::cin>>fonction;
    getline(std::cin,fonction);

    return new Personne(nom, age, fonction);
}
void Creation::stade(LigueHockey* ligue){
    int capacite;
    std::string qualite;
    std::string nom;
    std::string adresse;

    printf("Saisir la capacite du stade : \n");
    std::cin>>capacite;
    printf("Saisir la qualite du stade : \n");
    std::cin>>qualite;
    getline(std::cin,qualite);
    printf("Saisir le nom du stade : \n");
    getline(std::cin,nom);
    printf("Saisir l'adresse du stade : \n");
    getline(std::cin,adresse);

    ligue->addstade(new Stade(capacite, qualite, nom, adresse));

}

tm Creation::date(){
    std::string date;
    tm localdate;
    int year, mounth, day;
    bool bonformat;
    do{
         bonformat=true;
        printf("Saisir la date au format AAAA/MM/DD : \n");
        std::cin>>date;
        try{
            year = std::stoi(date.substr(0,4));
            mounth= std::stoi(date.substr(5,2));
            day = std::stoi(date.substr(8,2));
        }
        catch(std::invalid_argument const &e){
            bonformat=false;
        }
    } while (bonformat!=true);

    localdate.tm_year= year - 1900;
    localdate.tm_mon = mounth-1;
    localdate.tm_mday = day;

    return localdate;
}



void Creation::calendrierRencontre(LigueHockey* ligue){


    int annee;

    std::cout<<"entrer l'annee du calendrier : ";
    std::cin>>annee;

    ligue->addcalendrier(new CalendierRencontre(annee));

}

Rencontre* Creation::rencontre(LigueHockey* ligue){

    while(ligue->getclubs().size()<2){
        //tant qu'il n'y a pas deux clubs
        Creation::club(ligue);
    }
    
    tm date = Creation::date();

    Club* club1= Traitement::chooseClub(ligue);
    Club* club2;
    do{
        club2 = Traitement::chooseClub(ligue);
    }while(club2==club1);

    return new Rencontre(date,club1,club2);
}

Match Creation::match(Rencontre* rencontre){

    Equipe* equipe1 = Creation::equipe(rencontre->getLocal());
    Equipe* equipe2 = Creation::equipe(rencontre->getInvite());
    std::vector<Periode*> periodes;
    
    std::cout<<"choisir le nombre de periode : ";
    int nbperiode;
    std::cin>> nbperiode;

    for(int i=0;i<nbperiode;i++){
        periodes.push_back(Creation::periode());
    }
    return Match(equipe1,equipe2,periodes,Creation::resultat(periodes));

}

Periode* Creation::periode(){
    int duree, nbButLocal, nbButinvite;
    std::cout<<"Saisir la duree de la periode : ";
    std::cin>>duree;

    std::cout<<"Saisir le nombre de but de l'equipe local : ";
    std::cin>>nbButLocal;

    std::cout<<"Saisir le nombre de bu de l'equipe invite : ";
    std::cin>>nbButinvite;

    return new Periode(duree,nbButLocal,nbButinvite);

}

Resultat* Creation::resultat(std::vector<Periode*> periodes){
    int nbButlocal=0 ,nbButinvite=0;

    for(int i=0;i<periodes.size();i++){
        nbButlocal += periodes[i]->getNbButsLocale();
        nbButinvite +=periodes[i]->getNbButsAdverse();
    }
    return new Resultat(nbButlocal,nbButinvite);
}

Equipe* Creation::equipe(Club* club){

    int nbJoueur, nbGardien;
    Joueur* capitaine;

    std::cout<<"Saisir le nombre de joueurs : ";
    std::cin>>nbJoueur;

    std::cout<<"Saisir le nombre de guardiens : ";
    std::cin>>nbGardien;

    while(club->getListeJoueurs().size()<1){
        club->ajout_joueur(Creation::joueur());
    }
    capitaine = Traitement::chooseJoueur(club);

    return new Equipe(club,nbJoueur,nbGardien,capitaine);
}

Contrat_engagement* Creation::contrat_engagement(LigueHockey* ligue, Club* club_depart, Club* club_arrivee, Joueur* joueur){

    int duree;
    std::cout<<"saisir la duree du contrat : ";
    std::cin>>duree;

    tm dateEntree, dateContrat;
    std::cout<<"Saisir la date d'entree : ";
    dateEntree = Creation::date();

    std::cout<<"Saisir la date du contrat : ";
    dateContrat= Creation::date();

    Reglement* reglement = Creation::reglement();

    return new Contrat_engagement(joueur,club_depart,club_arrivee,duree,dateEntree,reglement,dateContrat);

}
        
Contrat_engagement* Creation::contrat_engagement(LigueHockey* ligue){
    std::cout<<"Club de provenance\n";
    Club* provenance = Traitement::chooseClub(ligue);
    std::cout<<"Club de destination\n";
    Club* destination = Traitement::chooseClub(ligue);

    Joueur* joueur = Traitement::chooseJoueur(provenance);

    int duree;
    std::cout<<"saisir la duree du contrat : ";
    std::cin>>duree;

    tm dateEntree, dateContrat;
    std::cout<<"Saisir la date d'entree : ";
    dateEntree = Creation::date();

    std::cout<<"Saisir la date du contrat : ";
    dateContrat= Creation::date();

    return new Contrat_engagement(joueur,destination,provenance,duree,dateEntree,Creation::reglement(),dateContrat);

}

Rupture* Creation::rupture(LigueHockey* ligue,Joueur* joueur, Club* club){

    std::cout<<"Raisons du depart du joueur :\n";
   
    std::string raison;
    std::cout<<"saisir les raisons du depart : ";
    std::cin>>raison;

    float penalite;
    std::cout<<"Saisir la penalite :";
    std::cin>>penalite;

    return new Rupture(joueur,raison,club,penalite);
}

Reglement* Creation::reglement(){

    float seuil;
    std::string descriptionDroits;
    float montantTransfert;
    float montantEncaisse;
    float montantRestant;

    std::cout<<"Saisir le seuil :";
    std::cin>>seuil;

    std::cout<<"Saisir la description des droits : ";
    std::cin>>descriptionDroits;

    std::cout<<"Saisir le montant du transfert : ";
    std::cin>>montantTransfert;

    std::cout<<"Saisir le montant encaisse : ";
    std::cin>>montantEncaisse;

    std::cout<<"Saisir le montant restant : ";
    std::cin>>montantRestant;

    return new Reglement(seuil,descriptionDroits,montantTransfert,montantEncaisse,montantRestant);

}

Joueur_non_autonome* Creation::joueur_non_autonome(){

    Joueur* joueur = Creation::joueur();

    int nbAnnee;

    std::cout<<"Saisir le nombre d'annee minimum dans le club : ";
    std::cin>>nbAnnee;

    Joueur_non_autonome* joueurna = new Joueur_non_autonome(joueur->getTaille(),joueur->getPoids(), joueur->getVille(),joueur->getParcours(),nbAnnee,joueur->getNom(), joueur->getPrenom());
    joueur->~Joueur();
    return joueurna;
}





void Afficher::club (Club* club){
    printf("Club de %s a l'adresse %s\n",club->getVille().c_str(),club->getAdresse().c_str());
}
void Afficher::entraineur(Entraineur* entraineur){
    printf("%s %s\n",entraineur->getNom().c_str(),entraineur->getPrenom().c_str());

}
void Afficher::joueur(Joueur* joueur){

    printf( "%s %s de %s\n",joueur->getNom().c_str(),joueur->getPrenom().c_str(),joueur->getVille().c_str());

}
void Afficher::palmares(Palmares* palmares){
    printf("%s du %d/%d/%d\n",palmares->getTitre().c_str(),palmares->getDate().tm_year+1900,palmares->getDate().tm_mon+1,palmares->getDate().tm_mday);

}
void Afficher::parcours(Parcours* parcours){
    printf("%s le %d/%d/%d\n",parcours->getNomClub().c_str(),parcours->getDate().tm_year+1900,parcours->getDate().tm_mon+1,parcours->getDate().tm_mday);

}
void Afficher::personne(Personne* personne){
    printf("%s : %s\n",personne->getNom().c_str(), personne->getRole().c_str());

}
void Afficher::stade(Stade* stade){
    printf("%s au %s\n",stade->getNom().c_str(),stade->getAdresse().c_str());

}
void Afficher::titre_gagne(Titre_gagne* titre_gagne){
    printf("%s au club de la ville de %s\n",titre_gagne->getPalmares()->getTitre().c_str(),titre_gagne->getClub()->getVille().c_str());

}
void Afficher::joueurduclub(Club* club){
    for(int i=0;i<club->getListeJoueurs().size();i++){
        Afficher::joueur(club->getListeJoueurs()[i]);
    }
}

void Afficher::calendrierRencontre(CalendierRencontre* calendrier){
    std::cout<<"Calendrier de l'annee "<<calendrier->getAnnee()<<"\n";
}
void Afficher::rencontre(Rencontre* rencontre){
    std::cout<<"Club de "<<rencontre->getLocal()->getVille()<<" vs Club de "<<rencontre->getInvite()->getVille()<<" le "<<rencontre->getDate().tm_year+1900<<"/"<<rencontre->getDate().tm_mon+1<<"/"<<rencontre->getDate().tm_mday<<"\n";
}
void Afficher::match(Match match){
    std::cout<<match.getEquipeLocale()->getClub()->getVille()<< " contre "<<match.getEquipeInvitee()->getClub()->getVille()<<"\n";
    Afficher::resultat(match.getResultatFinal());
}
void Afficher::resultat(Resultat* res){
    std::cout<<res->getNbButsLocale()<<" a "<< res->getNbButsAdverse()<<"\n";
}
void Afficher::periode(Periode* perio){
    std::cout<<perio->getNbButsLocale()<<" a "<<perio->getNbButsAdverse()<<" pour une duree de "<<perio->getDuree()<<"\n";
}
void Afficher::equipe(Equipe* equipe){
    std::cout<<"Club de "<<equipe->getClub()->getVille()<<" dirige par ";
    Afficher::joueur(equipe->getCapitaineEquipe());
}
        
void Afficher::contrat_engagement(Contrat_engagement* engagement){
    std::cout<<"Club de "<<engagement->getClubLibere()->getVille()<<" a "<<engagement->getClubContractant()->getVille()<<" pour ";
    Afficher::joueur(engagement->getJoueurContractant());

}
void Afficher::reglement(Reglement* reglement){

    std::cout<<reglement->getMontantTransfert()<<" avec comme droit "<<reglement->getDescriptionDroits();

}


void Afficher::RencontreClub(LigueHockey* ligue ,Club* club){

    for(int i=0;i<ligue->getCalendrier().size();i++){
        for(int j=0;j<ligue->getCalendrier()[i]->getRencontres().size();j++){
            Afficher::rencontre(ligue->getCalendrier()[i]->getRencontres()[j]);
        }
    }
}


void Afficher::MontantEncaisse(Club* club){
    std::cout<<"Saisir la date du debut du calcule\n";
    tm date =Creation::date();
    float montant=0;

    for(int i=0;i<club->getListeTransfert().size();i++){
        if( ((Contrat_engagement*)club->getListeTransfert()[i])->getClubLibere()==club){
            montant += ((Contrat_engagement*)club->getListeTransfert()[i])->getReglement()->getMontantEncaisse();
        }
    }
    std::cout<<" le montant encaisse est de "<<montant<<"\n";
}















Entraineur* Traitement::entraineurTitre(LigueHockey* ligue){
    if(ligue->getentraineurs().size()==0){
        return NULL;
    }
    else{
        Entraineur* maxtitre = ligue->getentraineurs()[0];
        for(int i=1;i<ligue->getentraineurs().size();i++){
            if(ligue->getentraineurs()[i]->getTitres().size() > maxtitre->getTitres().size()){
                maxtitre = ligue->getentraineurs()[i];
            }

        }
        return maxtitre;
    }
}    


Club* Traitement::clubTitre(LigueHockey* ligue){
     if(ligue->getclubs().size()==0){
        return NULL;
    }
    else{
        Club* maxclub = ligue->getclubs()[0];
        for(int i=1;i<ligue->getclubs().size();i++){
            if(ligue->getclubs()[i]->getPalmares().size() > maxclub->getPalmares().size()){
                maxclub = ligue->getclubs()[i];
            }

        }
        return maxclub;
    }
}


Club* Traitement::chooseClub(LigueHockey* ligue){
    for(int i =0; i<ligue->getclubs().size();i++){
        std::cout<< "Numero du club :" << i << " ";
        Afficher::club(ligue->getclubs()[i]);
    }                    
    int choixclub;
    do{
        std::cout<<"Saisir le numero du club voulu : ";
        std::cin>>choixclub;
    }while(choixclub<0||choixclub>=ligue->getclubs().size());

    return ligue->getclubs()[choixclub];  
}

Joueur* Traitement::chooseJoueur(Club* club){
    for(int i=0;i<club->getListeJoueurs().size();i++){
        std::cout<<"Numero du joueur :"<<i<<" ";
        Afficher::joueur(club->getListeJoueurs()[i]);
    }
    int choixJoueur;
    do{
        std::cout<<"Saisir le numero du joueur voulu : ";
        std::cin>>choixJoueur;
    }while(choixJoueur<0||choixJoueur>=club->getListeJoueurs().size());

    return club->getListeJoueurs()[choixJoueur];

}


CalendierRencontre* Traitement::chooseCalendrier(LigueHockey* ligue){
    for(int i=0;i<ligue->getCalendrier().size();i++){
        std::cout<<"Numero du calendrier :"<<i<<" ";
        Afficher::calendrierRencontre(ligue->getCalendrier()[i]);
    }
    int choixCalendrier;
    do{
        std::cout<<"Saisir le numero du calendrier voulu : ";
        std::cin>>choixCalendrier;
    }while(choixCalendrier<0||choixCalendrier>=ligue->getCalendrier().size());

    return ligue->getCalendrier()[choixCalendrier];
}

Rencontre* Traitement::chooseRencontre(CalendierRencontre* calendrier){
    for (int i=0;i<calendrier->getRencontres().size();i++){
        std::cout<<"Numero de la rendontre :"<<i<<" ";
        Afficher::rencontre(calendrier->getRencontres()[i]);
    }
    int choixRencontre;
    do{
        std::cout<<"Saisir le numero de la rencontre voulu : ";
        std::cin>>choixRencontre;
    }while(choixRencontre<0||choixRencontre>=calendrier->getRencontres().size());
    return calendrier->getRencontres()[choixRencontre];
}

void Traitement::ajoutTransfert(LigueHockey* ligue){

    Club* club_depart = chooseClub(ligue);
    Club* club_arrivee = chooseClub(ligue);
    Joueur* joueur = chooseJoueur(club_depart);

    if(typeid(joueur) != typeid(Joueur_non_autonome*)){   //Si le joueur est un joueur autonome (joueur classique)


        std::vector<Contrat*> v = club_depart->getListeTransfert();
        v.push_back(Creation::contrat_engagement(ligue,club_depart,club_arrivee,joueur));
        club_depart->setListeTransfert(v);

    }

    else{  //Joueur non-autonome -> rupture

        std::vector<Contrat*> r = club_depart->getListeRupture();
        r.push_back(Creation::rupture(ligue,joueur,club_arrivee));
        club_depart->setListeRupture(r);
        
    }
}






int Traitement::ApplicationBody(){
    
    LigueHockey ligue;
    bool sortie =false;

    std::cout<<"Bienvenue dans l'application de gestion de club de Hockey\n";

    do{
        int choix;
        std::cout<<"Appuyez sur 1 pour creer un club, 2 un entraineur, 3 un stade\n";
        
        if(ligue.getentraineurs().size()>0){
            std::cout<<"Apuyez sur 4 pour voir l'entraineur avec le plus de palmares\n";
        }

        if(ligue.getclubs().size()>0){
            std::cout<<"Appuyez sur 5 pour voir le club avec le plus gros palmares\n";
            std::cout<<"Appuyez sur 6 pour selectionner un club\n";
        }

        std::cout<<"Appuyez sur 7 pour creer un calendrier de rencontre\n";
        if(ligue.getCalendrier().size()>0){
            std::cout<<"Appuyez sur 8 pour selectionner un calendrier";
        }

        std::cout<<"Appuyez sur un autre nombre superieur a 8 pour sortir\n"; 

        std::cin>>choix;

        switch(choix){

            case 1:{
                Creation::club(&ligue);
                break;
            }

            case 2:{
                Creation::entraineur(&ligue);
                break;
            }

            case 3:{
                Creation::stade(&ligue);
                break;
            }

            case 4:{
                if(ligue.getentraineurs().size()>0){
                    Afficher::entraineur(Traitement::entraineurTitre(&ligue));
                }
                break;
            }

            case 5:{
                if(ligue.getclubs().size()>0){
                    Afficher::club(Traitement::clubTitre(&ligue));
                }
                break;

            }

            case 6:{
                if(ligue.getclubs().size()>0){
                    Club* club = Traitement::chooseClub(&ligue);                   
                    std::cout<<"1 : voir les joueurs \n2 : ajouter un palmares \n3 : supprimer le club \n4 calendrier rencontre\n5 monatant des transfert encaisse\n autre : retour au debut\n";
                    int choixactionclub;
                    std::cin>>choixactionclub;

                    switch(choixactionclub){
                        case 1:{
                            Afficher::joueurduclub(club);
                            break;
                        }
                        case 2:{
                            Creation::palmares(&ligue,club);
                            break;
                        }
                        case 3:{
                            ligue.destroy(club);
                            break;
                        }
                        case 4:{
                            Afficher::RencontreClub(&ligue,club);
                            break;
                        }
                        case 5:{
                            Afficher::MontantEncaisse(club);
                            break;
                        }
                    }
                }
                break;
            }

            case 7:{
                Creation::calendrierRencontre(&ligue);
                break;
            }
            case 8:{
                if(ligue.getCalendrier().size()>0){
                    CalendierRencontre* calendrier = Traitement::chooseCalendrier(&ligue);
                    int choixCalendrier;

                    std::cout<<"Saisir 1 pour creer une rencontre\n";
                    std::cout<<"Saisir 2 pour afficher les rencontres\n";
                    if(calendrier->getRencontres().size()>0){
                        std::cout<<"Saisir 3 pour selectionner une rencontre\n";
                    }
                    std::cout<<"Saisir un autre nombre pour revenir en arriere\n";
                    std::cin>>choixCalendrier;

                    switch(choixCalendrier){
                        case 1:{
                            calendrier->addRencontre(Creation::rencontre(&ligue));
                            break;
                        }
                        case 2:{
                            for(int i=0;i<calendrier->getRencontres().size();i++){
                                Afficher::rencontre(calendrier->getRencontres()[i]);
                            }
                            break;
                        }
                        case 3:{
                            if(calendrier->getRencontres().size()>0){
                                Rencontre* rencontre = Traitement::chooseRencontre(calendrier);
                                int choixRencontre;
                                std::cout<<"Saisir 1 pour ajouter le match ou le modifier\n";
                                if(rencontre->getMatch().getListePeriode().size()<0){
                                    std::cout<<"Saisir 2 pour voir le resultat du match\n";
                                }
                                std::cout<<"Saisir un autre nombre pour revenir au debut\n";
                                std::cin>>choixRencontre;

                                switch(choixRencontre){

                                    case 1:{
                                        rencontre->setMatch(Creation::match(rencontre));
                                        break;
                                    }
                                    case 2:{
                                        if(rencontre->getMatch().getListePeriode().size()<0){
                                            Afficher::match(rencontre->getMatch());
                                        }
                                        break;
                                    }

                                }
                            }
                        }
                    }
                        
                }
                break;
            }
            
               
            default:{
                sortie = true;
                break;
            }
        }

    }while(!sortie);
    return 0;
}