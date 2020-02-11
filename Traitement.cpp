#include "Traitement.hpp"
#include <iostream>


void Creation::club(LigueHockey ligue){

    std::string histoire;
    std::string couleur;
    std::string ville;
    std::string adresse;
    tm localdate;
    Entraineur* entraineur;
    Stade* stade;

    std::cout<<"Saisir l'histoire du club : ";
    std::cin>>histoire;
    std::cout<<"Saisir la couleur du club : ";
    std::cin>>couleur;
    std::cout<<"Saisir la ville du club : ";
    std::cin>>ville;
    std::cout<<"Saisir l'adresse du club : ";
    std::cin>>adresse;
    std::cout<<"Date de création du club : ";
    localdate = Creation::date();
   
    bool creation_entraineur = true;
    if(ligue.getentraineurs().size()>0){
        int choix;
        std::cout<<"Taper 1 pour séléctionner un entraineur préexistant, sinon n'importe quel autre touche\n";
        std::cin>>choix;
        if(choix == 1){
            creation_entraineur ==false;
        }
    }
    if(creation_entraineur){
        int choix;
        for(int i=0;i<ligue.getentraineurs().size();i++){
            std::cout<< i;
            Afficher::entraineur(ligue.getentraineurs()[i]);
        }
        std::cout<<"Saisir le numéro de l'entraineur\n";
        do{
            std::cin>>choix;
        }while(choix<0||choix>ligue.getentraineurs().size());
        entraineur = ligue.getentraineurs()[choix];
    }
    else{
        std::cout<<"Création d'un entraineur : ";
        Creation::entraineur(ligue);
        entraineur = ligue.getentraineurs().back();
    }

    
    bool creation_stade = true;
    if(ligue.getstades().size()>0){
        int choix;
        std::cout<<"Taper 1 pour séléctionner un stade préexistant, sinon n'importe quel autre touche\n";
        std::cin>>choix;
        if(choix == 1){
            creation_stade ==false;
        }
    }
    if(creation_stade){
        int choix;
        for(int i=0;i<ligue.getstades().size();i++){
            std::cout<< i ;
            Afficher::stade(ligue.getstades()[i]);
        }
        std::cout<<"Saisir le numéro du stade\n";
        do{
            std::cin>>choix;
        }while(choix<0||choix>ligue.getstades().size());
        stade = ligue.getstades()[choix];
    }
    else{
        std::cout<<"Création d'un stade : ";
        Creation::stade(ligue);
        stade = ligue.getstades().back();
    }

    Club* club = new Club(histoire,couleur,localdate,stade,ville,adresse,entraineur);

    std::cout<<"Voulez vous ajouter des joueurs? Entrer le nombre de joueurs\n";
    int nb_joueur;
    std::cin>>nb_joueur;
    for(int i=0;i<nb_joueur;i++){
        std::cout<<"Création du joueur "<<i+1<<" :\n";
        club->ajout_joueur(Creation::joueur());
    }


    std::cout<<"Voulez vous ajouter du staff technique? Entrer le nombre de personne\n";
    int nb_staff;
    std::cin>>nb_staff;
    for(int i=0;i<nb_staff;i++){
        std::cout<<"Création de la "<< i+1 <<" personne :\n";
        club->ajout_personne(Creation::personne());
    }
    
    std::cout<<"Voulez vous ajouter des palmares? Entrer le nombre de palmares\n";
    std::cout<<"Attention, les palmares seront aussi associé à l'entraineur\n";
    int nb_palmares;
    std::cin>>nb_palmares;
    for(int i=0;i<nb_palmares;i++){
        std::cout<<"Création du "<< i+1 <<" palmares :\n";
        club->ajout_Palmares(Creation::palmares());
    }

    ligue.addclub(club);


}

void Creation::entraineur(LigueHockey ligue){
    std::string name;
    std::string surname;
    std::string lieu_grade;
    
    std::cout<<"Saisir le nom de l'entraineur : ";
    std::cin>>name;
    std::cout<<"Saisir le prenom de l'entraineur : ";
    std::cin>>surname;
    std::cout<<"Saisir le lieu de grade : ";
    std::cin>>lieu_grade;
    
    ligue.addentaineur(new Entraineur(name, surname,lieu_grade));
}    
Joueur* Creation::joueur(){//todo faire choix ajout parcours
    std::string name;
    std::string surname;
    float taille;
    float poid;
    std::string ville;
    Joueur* joueur;

    std::cout<<"Saisir le nom du joueur : ";
    std::cin>>name;
    std::cout<<"Saisir le prenom du joueur  : ";
    std::cin>>surname;
    std::cout<<"Saisir la taille du joueur : ";
    std::cin>>taille;
    std::cout<<"Saisir le poid du joueur : ";
    std::cin>>poid;
    std::cout<<"Saisir la ville du joueur : ";
    std::cin>>ville;

    joueur = new Joueur(name,surname,taille,poid,ville);

    std::cout<<"Voulez vous ajouter du parcours? Entrer le nombre de parcours\n";
    int nb_parcours;
    std::cin>>nb_parcours;
    for(int i=0;i<nb_parcours;i++){
        std::cout<<"Création du parcours"<< i+1 <<" :\n";
        joueur->ajout_parcours(Creation::parcours());
    }
    return joueur;
}
Palmares* Creation::palmares(){
    std::string titre;

    std::cout<<"Saisir le titre du palamares : ";
    std::cin>>titre;

    return new Palmares(titre,Creation::date());
}

Parcours* Creation::parcours(){
    std::string nom_club;

    std::cout<<"Saisir le nom du club : ";
    std::cin>>nom_club;

    return new Parcours(nom_club,Creation::date());
}
Personne* Creation::personne(){
    std::string nom;
    int age;
    std::string fonction;
    std::cout<<"Saisir le nom de la personne : ";
    std::cin>>nom;
    std::cout<<"Saisir l'age de la personne : ";
    std::cin>>age;
    std::cout<<"Saisier la fonction de la personne : ";
    std::cin>>fonction;

    return new Personne(nom, age, fonction);
}
void Creation::stade(LigueHockey ligue){
    int capacite;
    std::string qualite;
    std::string nom;
    std::string adresse;

    std::cout<<"Saisir la capacité du stade : ";
    std::cin>>capacite;
    std::cout<<"Saisir la quatité du stade : ";
    std::cin>>qualite;
    std::cout<<"Saisir le nom du stade : ";
    std::cin>>nom;
    std::cout<<"Saisir l'adresse du stade : ";
    std::cin>>adresse;

    ligue.addstade(new Stade(capacite, qualite, nom, adresse));

}

tm Creation::date(){
    std::string date;
    tm localdate;
    int year, mounth, day;
    bool bonformat;
    do{
         bonformat=true;
        std::cout<<"Saisir la date au format AAAA/MM/DD : ";
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





void Afficher::club (Club* club){
    std::cout<<"Club de "<< club->getVille() << " à l'adresse " << club->getAdresse() << "\n";
}
void Afficher::entraineur(Entraineur* entraineur){
    std::cout<<entraineur->getnom()<<" "<<entraineur->getprenom()<<" ";

}
void Afficher::joueur(Joueur* joueur){
    std::cout<< joueur->getNom()<<" "<< joueur->getPrenom()<< " de "<< joueur->getVille()<<"\n";

}
void Afficher::palmares(Palmares* palmares){
    std::cout<<palmares->getTitre()<<" du "<< palmares->getDate().tm_year+1900<<"/"<<palmares->getDate().tm_mon+1<<"/"<<palmares->getDate().tm_mday<<"\n";

}
void Afficher::parcours(Parcours* parcours){
    std::cout<<parcours->getNomClub()<<" le "<<parcours->getDate().tm_year+1900<<"/"<<parcours->getDate().tm_mon+1<<"/"<<parcours->getDate().tm_mday<<"\n";

}
void Afficher::personne(Personne* personne){
    std::cout<<personne->getNom()<<" : "<< personne->getRole()<<"\n";

}
void Afficher::stade(Stade* stade){
    std::cout<<stade->getNom()<<" au "<<stade->getAdresse()<<"\n";

}
void Afficher::titre_gagner(Titre_gagner* titre_gagner){
    std::cout<<titre_gagner->getpalmares()->getTitre()<< " au club de la ville de "<< titre_gagner->getclub()->getVille()<<"\n";

}
void Afficher::joueurduclub(Club* club){
    for(int i=0;i<club->getListeJoueurs().size();i++){
        Afficher::joueur(club->getListeJoueurs()[i]);
    }
}



















Entraineur* Traitement::entraineurTitre(LigueHockey ligue){
    if(ligue.getentraineurs().size()==0){
        return NULL;
    }
    else{
        Entraineur* maxtitre = ligue.getentraineurs()[0];
        for(int i=1;i<ligue.getentraineurs().size();i++){
            if(ligue.getentraineurs()[i]->gettitres().size() < maxtitre->gettitres().size()){
                maxtitre = ligue.getentraineurs()[i];
            }

        }
        return maxtitre;
    }
}    


Club* Traitement::clubTitre(LigueHockey ligue){
     if(ligue.getclubs().size()==0){
        return NULL;
    }
    else{
        Club* maxclub = ligue.getclubs()[0];
        for(int i=1;i<ligue.getclubs().size();i++){
            if(ligue.getclubs()[i]->getPalmares().size() < maxclub->getPalmares().size()){
                maxclub = ligue.getclubs()[i];
            }

        }
        return maxclub;
    }
}