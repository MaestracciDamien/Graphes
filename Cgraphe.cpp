//
// Created by damie on 5/7/2017.
//

#include "Cgraphe.h"

Csommet **Cgraphe::getLSommets() const {
    return lSommets;
}

void Cgraphe::setLSommets(Csommet **lSommets) {
    Cgraphe::lSommets = lSommets;
}
