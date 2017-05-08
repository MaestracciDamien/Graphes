#include <iostream>
#include "Carc.h"
#include "Csommet.h"
#include "Cgraphe.h"

using namespace std;
int main() {
    Csommet sommet1 =1;
    Csommet sommet2 =2;
    Csommet sommet3 =3;


    Cgraphe graphe = Cgraphe();
    graphe.ajoutSommet(&sommet1);
    graphe.ajoutSommet(&sommet2);
    graphe.ajoutSommet(&sommet3);
    graphe.afficher();
    graphe.relierSommet(&sommet1,&sommet2);
    graphe.relierSommet(&sommet2,&sommet3);
    graphe.relierSommet(&sommet3,&sommet1);
    cout << "pos sommet 1 : " << graphe.getPosSommet(&sommet1) << endl;
    cout << "pos sommet 2 : " << graphe.getPosSommet(&sommet2) << endl;
    cout << "pos sommet 3 : " << graphe.getPosSommet(&sommet3) << endl;
    graphe.afficher();
    return 0;
}