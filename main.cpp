#include <iostream>
#include "Carc.h"
#include "Csommet.h"
#include "Cgraphe.h"

using namespace std;
int main(int argc,char* argv[]) {


    Cgraphe test = Cgraphe::loadFromFile(argv[1]);
    test.afficher();
    return 0;
}