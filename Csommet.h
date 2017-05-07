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
    int nbArcEntrants;
    int nbArcSortants;

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

    int getINumSommet() const;

    void setINumSommet(int iNumSommet);

    Carc **getLArcsSortants() const;

    void setLArcsSortants(Carc **lArcsSortants);

    Carc **getLArcsEntrants() const;

    void setLArcsEntrants(Carc **lArcsEntrants);

    int getNbArcEntrants() const;

    void setNbArcEntrants(int nbArcEntrants);

    int getNbArcSortants() const;

    void setNbArcSortants(int nbArcSortants);

    bool isArcinEntrant(Carc *arc);

    bool isArcinSortant(Carc *arc);

    void afficher();

    bool operator==(const Csommet &rhs) const;

    bool operator!=(const Csommet &rhs) const;
};


#endif //UNTITLED1_CSOMMET_H
