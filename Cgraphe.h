//
// Created by damie on 5/7/2017.
//

#ifndef UNTITLED1_CGRAPHE_H
#define UNTITLED1_CGRAPHE_H


#include "Csommet.h"

class Cgraphe {
private :
    Csommet **lSommets;

public :
    Cgraphe();
    Cgraphe(Csommet ** l);
    ~Cgraphe();

    void afficher();
    void loadFromFile(char * fileName);
};


#endif //UNTITLED1_CGRAPHE_H
