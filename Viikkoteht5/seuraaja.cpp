#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "Luodaan seuraaja: " << nimi << endl;
}

void Seuraaja::Paivitys(string viesti)
{
    cout << getNimi() << " sai viestin: " << viesti << endl;
}

string Seuraaja::getNimi() const
{
    return nimi;
}
