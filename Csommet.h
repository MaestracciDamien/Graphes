//
// Created by damie on 5/7/2017.
//

#ifndef UNTITLED1_CSOMMET_H
#define UNTITLED1_CSOMMET_H


#include "Carc.h"

class Csommet {
private :
    int iNumSommet;
    Carc ** lArcsPartans;
    Carc ** lArcsEntrants;

public :
    Csommet(int iNum);
    Csommet(int iNum, Carc ** lOut, Carc ** lIn );
    ~Csommet();
};


#endif //UNTITLED1_CSOMMET_H
