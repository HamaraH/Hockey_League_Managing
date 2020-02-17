#ifndef RESULTAT_H
#define RESULTAT_H

class Resultat{

    private:

    int nbButsLocale;
    int nbButsAdverse;

    public:

    Resultat();
    Resultat(int,int);
    ~Resultat();

    int getNbButsLocale();
    void setNbButsLocale(int);

    int nbButsAdverse();
    void setNbButsAdverse(int);

};

#endif