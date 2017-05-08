//
// Created by damie on 5/7/2017.
//

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "Cgraphe.h"

using namespace std;
Csommet **Cgraphe::getLSommets() const {
    return lSommets;
}

void Cgraphe::setLSommets(Csommet **lSommets) {
    Cgraphe::lSommets = lSommets;
}

Cgraphe::Cgraphe() {
    this->iNbSommets = 0 ;
    this->lSommets = nullptr;
}

Cgraphe::Cgraphe(Csommet **l, int nb) {
    this->lSommets = l;
    this->iNbSommets = nb;
}

Cgraphe::~Cgraphe() {
    if(this->lSommets != nullptr)
    {
        for (int i = 0; i <iNbSommets ; ++i) {
            free(lSommets[i]);
        }
        free(lSommets);
    }

}

void Cgraphe::afficher() {
    cout << "Graphe :" << endl;
    cout << "Nombre de sommets : " << this->iNbSommets << endl;
    cout << "Sommets[" ;
    for (int i = 0; i <this->iNbSommets ; ++i) {
        lSommets[i]->afficher();
    }
    cout << "]";

}

void Cgraphe::ajoutSommet(Csommet *sommet) {
    if(this->isSommetinGraphe(sommet)){
        throw invalid_argument("Le sommet est déja dans la liste");
    }
    else{
        this->iNbSommets++;
        lSommets = (Csommet **) realloc(lSommets, sizeof(Csommet *) * this->iNbSommets);
        lSommets[this->iNbSommets-1] = sommet;
    }
}

void Cgraphe::supSommet(int numSommet) {

}


bool Cgraphe::isSommetinGraphe(Csommet * s)
{
    bool retour = false;
    int i=0;
    while(!retour && i<this->iNbSommets)
    {
        if(*s == *lSommets[i]) retour = true;
        i++;
    }
    return retour;
}

void Cgraphe::modifSommet(int numSommet, Csommet *sommet) {

}

void Cgraphe::relierSommet(Csommet *dep, Csommet * arr) {
    if (this->isSommetinGraphe(dep) && this->isSommetinGraphe(arr))
    {
        int posA = this->getPosSommet(dep);
        int posB = this->getPosSommet(arr);
        Carc * arcA= (Carc *) malloc(sizeof(Carc));
        arcA->setINumDestination(arr->getINumSommet());
        Carc * arcB= (Carc *) malloc(sizeof(Carc));
        arcB->setINumDestination(dep->getINumSommet());
        this->lSommets[posA]->ajoutArcSortant(arcA);
        this->lSommets[posB]->ajoutArcEntrant(arcB);
    }
    else throw invalid_argument("L'un des sommet n'est pas dans le graphe");
}

int Cgraphe::getPosSommet(Csommet * sommet)
{
    if (this->isSommetinGraphe(sommet))
    {
        for (int i = 0; i <this->iNbSommets ; ++i) {
            if (*lSommets[i] == *sommet) return i;
        }
    }
    else throw invalid_argument("Le sommet n'est pas dans le graphe");
}




Cgraphe Cgraphe::loadFromFile(char *fileName) {
    Cgraphe graphe = Cgraphe();
    string sNomFichier = fileName;
    ifstream fichier(sNomFichier.c_str()); // on ouvre le fichier en lecture
    if (fichier) { // on verifie si le fichier est bien ouvert
        string sNBSommet;
        getline(fichier, sNBSommet);
        unsigned int uiNBSommet = atoi(sNBSommet.substr(10, 5).c_str());

        string sNBArcs;
        getline(fichier, sNBArcs);
        unsigned int uiNBArcs = atoi(sNBArcs.substr(7, 5).c_str());

        string sNum;
        getline(fichier, sNum);
        for (unsigned int i = 0; i < uiNBSommet; i++) {
            getline(fichier, sNum);
            int iNum = atoi(sNum.substr(7, 5).c_str());
            graphe.ajoutSommet(new Csommet(iNum));
        }
        graphe.afficher();
        std::cout << sizeof(graphe.lSommets)-1 << std::endl;
        string sSommet;
        for (unsigned int i = 0; i < 2; i++) {
            getline(fichier,sSommet);
        }
        for (unsigned int i = 0; i < uiNBArcs; i++) {
            getline(fichier, sSommet);
            int uiSommetDebut = atoi(sSommet.substr(6, 1).c_str()); //num sommet Debut
            int uiSommetFin = atoi(sSommet.substr(13, 5).c_str()); // num sommet Fin
            std::cout << uiSommetDebut << " , " << uiSommetFin << endl;
            // Ajout Arcs

            Csommet * sommetDebut = (Csommet *) malloc(sizeof(Csommet));
            sommetDebut->setINumSommet(uiSommetDebut);
            Csommet * sommetFin = (Csommet *) malloc(sizeof(Csommet));
            sommetFin->setINumSommet(uiSommetFin);
            std::cout << "Ajout Arcs" << std::endl;
            graphe.relierSommet(sommetDebut,sommetFin);

        }
        fichier.close();
        return graphe;
    }
}