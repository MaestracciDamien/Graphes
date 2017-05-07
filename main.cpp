#include <iostream>
#include "Carc.h"
#include "Csommet.h"

int main() {
    Carc arc1 = Carc(5);
    arc1.afficher();
    Carc arc2 = Carc(4);
    arc2.afficher();
    Csommet sommet = Csommet(5);
    sommet.ajoutArcEntrant(&arc1);
    sommet.ajoutArcSortant(&arc2);
    sommet.afficher();

    return 0;
}