#include <iostream>
#include "Carc.h"
#include "Csommet.h"
#include "Cgraphe.h"

using namespace std;
int main(int argc,char* argv[]) {


    Cgraphe test = Cgraphe::loadFromFile(argv[1]);
    Cgraphe  testRecopie = *test.inverserArcs();
    cout << "testRecopie inversion arc" << endl;
    testRecopie.afficherXML();
    cout << "test" << endl;
    test.afficherXML();
    test.~Cgraphe();
    cout << "testRecopie inversion arc" << endl;
    testRecopie.afficherXML();
    return 0;
}