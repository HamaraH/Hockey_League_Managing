#include "Traitement.hpp"

int main(int argc, const char* argv[]){

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

        std::cout<<"Appuyez sur un autre nombre superieur a 6 pour sortir\n"; 

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
                    break;
                }
            }

            case 5:{
                if(ligue.getclubs().size()>0){
                    Afficher::club(Traitement::clubTitre(&ligue));
                    break;
                }

            }

            case 6:{
                if(ligue.getclubs().size()>0){
                    for(int i =0; i<ligue.getclubs().size();i++){
                        std::cout<< "Numero du club :" << i << " ";
                        Afficher::club(ligue.getclubs()[i]);
                    }                    
                    int choixclub;
                    do{
                        std::cout<<"Saisir le numero du club voulu : ";
                        std::cin>>choixclub;
                    }while(choixclub<0||choixclub>ligue.getclubs().size());                    
                    std::cout<<"1 : voir les joueurs \n2 : ajouter un palmares \n3 : supprimer le club \n autre : retour au debut\n";
                    int choixactionclub;
                    std::cin>>choixactionclub;

                    switch(choixactionclub){
                        case 1:{
                            Afficher::joueurduclub(ligue.getclubs()[choixclub]);
                            break;
                            }
                        case 2:{
                            Creation::palmares(&ligue,ligue.getclubs()[choixclub]);
                            break;
                        }
                        case 3:{
                            ligue.getclubs()[choixclub]->~Club();
                            ligue.destroy(choixclub);
                            break;
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