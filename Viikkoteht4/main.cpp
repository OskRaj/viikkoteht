#include <iostream>
#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

int main()
{
    /* Pankkitili pa("oskari");


    Luottotili veleka("oskari", 1000);
    veleka.withdraw(500);

    veleka.withdraw(500);

    Asiakas as("Oskari", 1000);
        as.luotonNosto(100);
    as.showSaldo();


    Asiakas A("Oskari", 50);
    Asiakas B("Joonas", 50);
    A.talletus(50);
    A.tilisiirto(50, B);
*/

    Asiakas A("Aapeli", 1000);
    cout << endl;
    A.showSaldo();
    cout << endl;
    A.talletus(250);
    cout << endl;
    A.luotonNosto(150);
    cout << endl;
    A.showSaldo();
    cout << endl;
    cout << endl;

    Asiakas B ("Bertta", 1000);
    cout << endl;
    B.showSaldo();
    cout << endl;
    cout << A.getName();
    cout << endl;
    A.showSaldo();
    cout << endl;
    A.tilisiirto(50, B);
    cout << endl;
    cout << B.getName();
    cout << endl;
    B.showSaldo();



}
