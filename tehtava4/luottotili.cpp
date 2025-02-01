#include "luottotili.h"
#include <iostream>


Luottotili::Luottotili(string o, double lr): Pankkitili(o)
{
    luottoRaja = lr;

}

bool Luottotili::withdraw(double summa)
{
    if (summa < 0 || summa + saldo > luottoRaja) {

        cout
            << "nosto ei onnistu, summa negatiivinen. "
            <<  " jalkeen velkasaldo = "
            << saldo
            << " nostettu summa="
            << summa
            << endl;
        return false;
    }
    saldo += summa;
    cout
        << "nosto luottotililta onnistui. "
        <<  " velan maara = "
        << saldo
        << " nostettu summa = "
        << summa
        << endl;
    return true;
}

bool Luottotili::deposit(double summa)
{
    if (summa < 0 || summa > saldo) {

        cout
            << "talletus ei onnistu, summa negatiivinen tai talletus on suurempi kuin velan maara. "
            <<  " talletuksen jalkeen velkasaldo = "
            << saldo
            << " summa="
            << summa
            << endl;
        return false;
    }
    saldo -= summa;

    cout
        << "talletus onnistui,. "
        <<  " jalkeen velkasaldo = "
        << saldo
        << " talletettu summa="
        << summa
        << endl;
    return true;
}
