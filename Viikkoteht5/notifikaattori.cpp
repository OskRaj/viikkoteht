#include "notifikaattori.h"

Notifikaattori::Notifikaattori(){}

void Notifikaattori::lisaa(Seuraaja *lisattySeuraaja)
{
    lisattySeuraaja->next = seuraajat;
    seuraajat = lisattySeuraaja;
    cout << "Lisatty seuraaja: " << lisattySeuraaja -> getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *poistettuSeuraaja)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        if(alku -> next == poistettuSeuraaja)
        {
            alku -> next = poistettuSeuraaja -> next;
            cout << "Poistettu seuraaja " << poistettuSeuraaja->getNimi() << endl;
        }
        else
        {
            alku = alku -> next;
        }
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        if(alku != nullptr)
        {
        cout << alku->getNimi() << endl;
        alku = alku -> next;
        }
        else
        {
            cout << "Lista loppui" << endl;
        }
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        alku -> Paivitys(viesti);
        alku = alku -> next;

    }
}
