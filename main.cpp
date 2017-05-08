#include <iostream>
#include "Carc.h"
#include "Csommet.h"
#include "Cgraphe.h"

using namespace std;
int main() {
    Csommet sommet1 =1;
    Csommet sommet2 =2;
    Csommet sommet3 =3;

    Csommet sommet4 = 2;
    Csommet sommet5 =3;

    Cgraphe graphe = Cgraphe();
    graphe.ajoutSommet(&sommet1);
    graphe.ajoutSommet(&sommet2);
    graphe.ajoutSommet(&sommet3);
    //graphe.afficher();

    cout << "bool : " << graphe.isSommetinGraphe(&sommet4);
    graphe.relierSommet(&sommet1,&sommet2);
    graphe.afficher();
    graphe.relierSommet(&sommet5,&sommet1);
    graphe.afficher();
    graphe.relierSommet(&sommet4,&sommet5);
    cout << "pos sommet 1 : " << graphe.getPosSommet(&sommet1) << endl;
    cout << "pos sommet 2 : " << graphe.getPosSommet(&sommet2) << endl;
    cout << "pos sommet 3 : " << graphe.getPosSommet(&sommet3) << endl;
    graphe.afficher();
    return 0;
}