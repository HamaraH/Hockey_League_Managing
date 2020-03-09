#ifndef RENCONTRE_H
#define RENCONTRE_H

#include "Match.hpp"
#include <ctime>
#include "club.hpp"

class Rencontre{

    private :
        std::tm date;
        Club* local;
        Club* invite;
        Match match;

    public :

    Rencontre();
    Rencontre(std::tm date,Club* local, Club* invite);
    Rencontre(std::tm date,Club* local, Club* invite, Match match);
    ~Rencontre();

    std::tm getDate();
    void setDate(std::tm);
    Club* getLocal();
    void setLocal(Club*);
    Club* getInvite();
    void setInvite(Club*);
    Match getMatch();
    void setMatch(Match);

};


#endif