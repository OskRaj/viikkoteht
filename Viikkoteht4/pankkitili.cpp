#include "pankkitili.h"

Pankkitili::Pankkitili() {}

Pankkitili::Pankkitili(string nimi)
{
    omistaja = nimi;
    cout << "Pankkitili luotu: " << nimi << endl;
}

bool Pankkitili::withdraw(double summa)
{
    cout << "Saldo= " << saldo << endl << "Nostettava summa tililta "
         << omistaja << " summalla: "
         << summa << endl;
    if(summa < 0)
    {
        cout << "Nostettava summa ei voi olla negatiivinen" << endl;
        return false;

    }
    else if(summa > saldo)
    {
        cout <<"Tililla ei ole katetta (koyha :D)" << endl;
        return false;
    }
    else
    {
        saldo = saldo - summa;
        cout << "Saldo toimeksiannon jalkeen= "
             << saldo << endl;
        return true;
    }

}

bool Pankkitili::deposit(double summa)
{
    if(summa < 0)
    {
        cout << "Negatiivista talletusta ei voi suorittaa" << endl
             << "Summa, jota yritita tallettaa: " << summa << endl;
        return false;
    }
    else
    {
        saldo = saldo + summa;
        cout << "Talletus tilille "
             << omistaja << " summalla: " << summa << endl
             << "Talletus onnistui! Tilin " << omistaja << " saldo talletuksen jalkeen: "
             << saldo << endl;
        return true;
    }
}

double Pankkitili::getSaldo() const
{
    return saldo;
}

