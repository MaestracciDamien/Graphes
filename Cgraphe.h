//
// Created by damie on 5/7/2017.
//

#ifndef UNTITLED1_CGRAPHE_H
#define UNTITLED1_CGRAPHE_H


#include "Csommet.h"

class Cgraphe {
private :
    Csommet **lSommets;
    int iNbSommets;

public :
    Cgraphe();
    Cgraphe(const Cgraphe&);
    Cgraphe(Csommet ** l, int nb);
    ~Cgraphe();

    void afficher();
    static Cgraphe loadFromFile(char * fileName);
    void ajoutSommet(Csommet * sommet);
    void supSommet(int numSommet);
    void modifSommet(int numSommet, Csommet * sommet);
    void relierSommet(Csommet * dep, Csommet * arr);

    Csommet **getLSommets() const;

    void setLSommets(Csommet **lSommets);


    bool isSommetinGraphe(Csommet * s);

    int getPosSommet(Csommet * sommet);

    void afficherXML();

    Cgraphe * inverserArcs();

    int getINbSommets() const;

    void setINbSommets(int iNbSommets);
};


#endif //UNTITLED1_CGRAPHE_H
