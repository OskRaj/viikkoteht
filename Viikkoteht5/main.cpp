#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori *N = new Notifikaattori();

    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Beebeli");
    Seuraaja *C = new Seuraaja("Ceebeli");

    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    cout << endl;


    N->tulosta();

    cout << endl;

    N->postita("VIESTI 1");

    cout << endl;

    N->poista(B);
    N->tulosta();

    cout << endl;

    N->postita("VIESTI 2");

    cout << endl;

    delete A;
    delete B;
    delete C;

    return 0;
}
