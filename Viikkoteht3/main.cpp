#include <iostream>
#include "chef.h"
#include "ItalianChef.h"
using namespace std;

int main()
{
    Chef c_olio("GORDON");

    int annoksiasalaatti = c_olio.makeSalad(10);
    cout << "Salaattiannoksia = " << annoksiasalaatti << endl;
    int annoksiakeitto = c_olio.makeSoup(9);
    cout << "Keittoannoksia = " << annoksiakeitto << endl;

    ItalianChef c_olio2 ("MAARIO");

    c_olio2.askSecret("pizza", 10 , 10);

    return 0;
}
