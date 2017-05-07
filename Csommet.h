//
// Created by damie on 5/7/2017.
//

#ifndef UNTITLED1_CSOMMET_H
#define UNTITLED1_CSOMMET_H


#include "Carc.h"

class Csommet {
private :
    int iNumSommet;
    Carc ** lArcsSortants;
    Carc ** lArcsEntrants;

public :
    Csommet(int iNum);
    Csommet(int iNum, Carc ** lOut, Carc ** lIn );
    ~Csommet();

    void ajoutArcEntrant(Carc * arc);
    void ajoutArcSortant(Carc * arc);
    void supArcEntrant (int numArc);
    void supArcSortant (int numArc);
    void modifArcEntrant(int numArc, Carc * arc);
    void modifArcSortant(int numArc, Carc * arc);


};


#endif //UNTITLED1_CSOMMET_H
