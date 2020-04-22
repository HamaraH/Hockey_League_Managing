#ifndef NEGOCIATION_H
#define NEGOCIATION_H

#include "NegoVendeur.hpp"
#include "NegoAcheteur.hpp"
#include "../EXTERN/mingw.thread.h"
#include "../EXTERN/mingw.mutex.h"


class Negociation{

    private:

    double duree;
    bool conclu;
    double proposer;
    bool quiPropose;

    std::vector<std::string> echange;

    NegoAcheteur acheteur;
    NegoVendeur vendeur;

    public:

    Negociation();
    Negociation(NegoAcheteur,NegoVendeur);
    ~Negociation();

    NegoAcheteur getAcheteur();
    void setAcheteur(NegoAcheteur);

    NegoVendeur getVendeur();
    void setVendeur(NegoVendeur);

    double getDuree();
    void setDuree(double);
    bool getConclu();
    void setConclu(bool);
    double getProposer();
    void setProposer(double);
    bool getQuiPropose();
    void setQuiPropose(bool);   
    std::vector<std::string> getEchange();
    void setEchange(std::vector<std::string>);


    void AjoutEchange(std::string);

    void ProposerOffre(std::mutex*);
    void AccepterOffre();
    void RejeterOffre();

    void DebutNegociation();
    static void ThreadAcheteur(Negociation*, std::mutex*);
    static void ThreadVendeur(Negociation*,std::mutex*);


};


#endif