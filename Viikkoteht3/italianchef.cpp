#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori" << endl;
}

ItalianChef::ItalianChef(string name):Chef(name)
{
    cout << "ItalianChef defaultkonstruktori " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{

    if(password.compare(pw) == 0)
    {
        cout << "Salasana oikein" << endl;
        flour = f;
        water = w;
        cout << "Jauhoja = " << flour << endl << "Vetta = "
             << water << endl;
        int annoksia = makepizza();
        cout << "Pizzoja tuli = " << annoksia << endl;
        return true;
    }
    else
    {
        cout << "Salasana vaarin" << endl;
        return false;
    }
}

int ItalianChef::makepizza()
{
    int annoksia = 0;
    int smallerAmount = min(flour, water);
    annoksia = smallerAmount / 5;
    return annoksia;
}
