#include "pankkitili.h"



Pankkitili::Pankkitili(string o)
{
    omistaja = o;
}

bool Pankkitili::deposit(double summa)
{
    if (summa < 0) {

            cout
            << "kayttotilille talletus ei onnistu, summa negatiivinen. "
            <<  " jalkeen saldo = "
            << saldo
            << " summa="
            << summa
            << endl;
        return false;
    }
    saldo += summa;

    cout
    << "kayttotili talletus onnistui. "
    <<  " kayttotilin saldo talletuksen jalkeen = "
    << saldo
    << " ja talletettu summa = "
    << summa
    << endl;
    return true;

}



bool Pankkitili::withdraw(double summa)
{
    if (summa < 0 || summa > saldo) {

            cout
            << "nosto ei onnistu, summa negatiivinen tai tililla ei ole katetta. "
            <<  " kayttotilin saldo nostoyrityksen jalkeen = "
            << saldo
            << " summa jota yritettiin nostaa = "
            << summa
            << endl;
        return false;
        }


            saldo -= summa;

            cout
            << "kayttotilin nosto onnistui. "
            <<  " kayttotilin saldo noston jalkeen = "
            << saldo
            << " summa="
            << summa
            << endl;
            return true;
}
double Pankkitili::getBalance() const {
    return saldo;
}


