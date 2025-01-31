#include "luottotili.h"

Luottotili::Luottotili() {}

Luottotili::Luottotili(string o, double lr) : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "Luottotili luotu: " << o << endl;
    cout << "Luottoraja= " << luottoRaja << endl;
}

bool Luottotili::deposit(double summa)
{
    if (summa < 0)
    {
        cout << "Luoton takaisinmaksun summa ei voi olla negatiivinen" << endl;
        return false;
    }
    else if(saldo < summa)
    {
        cout << "Yritit maksaa liikaa velkaa. Sinulla on lainaa: "
             << saldo << ", mutta yritit maksaa " << summa << endl;
        return false;
    }

    else
    {
       saldo = saldo - summa;


        cout << "Lainan takaisinmaksu onnistui summalla: " << summa
             << endl << "Velkaa jaljella: " << saldo << endl;
        return true;
    }
}

bool Luottotili::withdraw(double summa)
{
    if (summa < 0)
    {
        cout << "Luoton noston summa ei voi olla negatiivinen" << endl;
        return false;
    }
    else if (summa > luottoRaja)
    {
        cout << "Luottoraja ei riita" << endl;
        return false;
    }
    else
    {
        saldo = summa + saldo;
        cout << "Nostettu velkasumma: " << summa << endl
             << "Velkatilin saldo: " << saldo << endl
             << "Luottoa jaljella: " << luottoRaja - saldo << endl;
        return true;
    }
}

