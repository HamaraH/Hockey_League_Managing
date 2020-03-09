#ifndef PERIODE_H
#define PERIODE_H

class Periode{

    private:

    int duree;
    int nbButsLocale;
    int nbButsAdverse;


    public:

    Periode();
    Periode(int, int, int);
    ~Periode();

    int getDuree();
    void setDuree(int);

    int getNbButsLocale();
    void setNbButsLocale(int);

    int getNbButsAdverse();
    void setNbButsAdverse(int);


};

#endif