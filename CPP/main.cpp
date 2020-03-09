
#include <iostream>
#include "vector"
#include <string>

#include "..\HPP\Club.hpp"
#include "..\HPP\Contrat.hpp"
#include "..\HPP\Contrat_engagement.hpp"

using namespace std;


int main(){

    
    Club* c1 = new Club();

    vector<Contrat*> v1;
    Contrat_engagement* contrat = new Contrat_engagement();
    contrat->setDureeContrat(2);

    v1.push_back(contrat);

    c1->setListeTransfert(v1);

    cout<<c1->getListeTransfert().at(0)->getDureeContrat();

    return 0;

}