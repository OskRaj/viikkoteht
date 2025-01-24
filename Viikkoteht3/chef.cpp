#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkonstruktori" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, nimi: " << chefName << endl;
}

Chef::~Chef()
{
    cout << "chef destruktori" << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    cout << "Salaattiaineksia = " << aines << endl;
    int annoksia;
    annoksia = aines / 5;
    return annoksia;
}

int Chef::makeSoup(int aines)
{
    cout << "Keittoaineksia = " << aines << endl;
    int annoksia;
    annoksia = aines / 3;
    return annoksia;
}
