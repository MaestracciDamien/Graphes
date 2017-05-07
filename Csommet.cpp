//
// Created by damie on 5/7/2017.
//

#include <stdlib.h>
#include <iostream>
#include "Csommet.h"

using namespace std;
Csommet::Csommet(int iNum) {
    this->iNumSommet = iNum;
    this->nbArcEntrants =0;
    this->nbArcSortants =0;
    this->lArcsEntrants = nullptr;
    this->lArcsSortants = nullptr;
}



Csommet::~Csommet() {
    if (this->lArcsSortants != nullptr)
    {
        for(int i= 0 ; i< this->nbArcSortants; i++)
        {
            free(lArcsSortants[i]);
        }
        free(lArcsSortants);
    }
    if (this->lArcsEntrants != nullptr)
    {
        for(int i= 0 ; i< this->nbArcEntrants; i++)
        {
            free(lArcsEntrants[i]);
        }
        free(lArcsEntrants);
    }
}

bool Csommet::isArcinEntrant(Carc * arc)
{
    bool retour = false;
    int i=0;
    while(!retour && i<this->nbArcEntrants)
    {
        if(arc == lArcsEntrants[i]) retour = true;
        i++;
    }
    return retour;
}

bool Csommet::isArcinSortant(Carc * arc)
{
    bool retour = false;
    int i=0;
    while(!retour && i<this->nbArcSortants)
    {
        if(arc == lArcsSortants[i]) retour = true;
        i++;
    }
    return retour;
}


void Csommet::ajoutArcEntrant(Carc *arc) {

}

void Csommet::ajoutArcSortant(Carc *arc) {

}

void Csommet::supArcEntrant(int numArc) {

}

void Csommet::supArcSortant(int numArc){

}

void Csommet::afficher()
{
    cout << "Numéro sommet :" << this->iNumSommet << endl;
    cout << "Liste arc entrants : [";
    for (int i = 0; i < this->nbArcEntrants ; ++i) {
        this->lArcsEntrants[i]->afficher();
        cout <<", " ;
    }
    cout << "]" << endl;
    cout << "Liste arc sortants : [";
    for (int i = 0; i < this->nbArcSortants ; ++i) {
        this->lArcsSortants[i]->afficher();
        cout <<", " ;
    }
    cout << "]" << endl;


}



int Csommet::getINumSommet() const {
    return iNumSommet;
}

void Csommet::setINumSommet(int iNumSommet) {
    Csommet::iNumSommet = iNumSommet;
}

Carc **Csommet::getLArcsSortants() const {
    return lArcsSortants;
}

void Csommet::setLArcsSortants(Carc **lArcsSortants) {
    Csommet::lArcsSortants = lArcsSortants;
}

Carc **Csommet::getLArcsEntrants() const {
    return lArcsEntrants;
}

void Csommet::setLArcsEntrants(Carc **lArcsEntrants) {
    Csommet::lArcsEntrants = lArcsEntrants;
}


int Csommet::getNbArcEntrants() const {
    return nbArcEntrants;
}

void Csommet::setNbArcEntrants(int nbArcEntrants) {
    Csommet::nbArcEntrants = nbArcEntrants;
}

int Csommet::getNbArcSortants() const {
    return nbArcSortants;
}

void Csommet::setNbArcSortants(int nbArcSortants) {
    Csommet::nbArcSortants = nbArcSortants;
}

Csommet::Csommet(int iNum, Carc **lOut, Carc **lIn) {

}

void Csommet::modifArcEntrant(int numArc, Carc *arc) {

}

void Csommet::modifArcSortant(int numArc, Carc *arc) {

}
