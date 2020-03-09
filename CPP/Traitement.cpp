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
    

    joueur = new Joueur(name,surname,taille,poids,ville);

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

    std::cout<<"entrer l'année du calendrier : ";
    std::cin>>annee;

    ligue->addcalendrier(new CalendierRencontre(annee));

}

Rencontre* Creation::rencontre(LigueHockey* ligue){

    
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
    
    std::cout<<"choisir le nombre de période : ";
    int nbperiode;
    std::cin>> nbperiode;

    for(int i=0;i<nbperiode;i++){
        periodes.push_back(Creation::periode());
    }
    return Match(equipe1,equipe2,periodes,Creation::resultat(periodes));

}

Periode* Creation::periode(){
    int duree, nbButLocal, nbButinvite;
    std::cout<<"Saisir la durée de la période : ";
    std::cin>>duree;

    std::cout<<"Saisir le nombre de but de l'équipe local : ";
    std::cin>>nbButLocal;

    std::cout<<"Saisir le nombre de bu de l'équipe invité : ";
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

    capitaine = Traitement::chooseJoueur(club);

    return new Equipe(club,nbJoueur,nbGardien,capitaine);
}


        
Contrat_engagement* Creation::contrat_engagement(){}

Joueur_non_autonome* Creation::joueur_non_autonome(){}





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



















Entraineur* Traitement::entraineurTitre(LigueHockey* ligue){
    if(ligue->getentraineurs().size()==0){
        return NULL;
    }
    else{
        Entraineur* maxtitre = ligue->getentraineurs()[0];
        for(int i=1;i<ligue->getentraineurs().size();i++){
            if(ligue->getentraineurs()[i]->getTitres().size() < maxtitre->getTitres().size()){
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
            if(ligue->getclubs()[i]->getPalmares().size() < maxclub->getPalmares().size()){
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
    }while(choixclub<0||choixclub>ligue->getclubs().size());

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
    }while(choixJoueur<0||choixJoueur>club->getListeJoueurs().size());

    return club->getListeJoueurs()[choixJoueur];

}