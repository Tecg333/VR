#include "asiakas.h"
#include "iostream"
using namespace std;


Asiakas::Asiakas(string n, double lr)
    :kayttotili(n), luottotili(n, lr)
{
    nimi = n ;
    cout << "kaytto- ja luottotili luotu Asiakkaalle:" << nimi << " luottoraja = " << lr << endl;
}

bool Asiakas::talletus(double summa)
{
    cout << "Asiakas" << nimi << " tallettaa kayttotilille " << summa << endl;
    bool onnistuiko = kayttotili.deposit(summa);
    if (onnistuiko == false){
        cout << "meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::nosto(double summa)
{
    cout << "asiakas" << nimi << " nostaa kayttotililta " << summa << endl;
    bool onnistuiko = kayttotili.withdraw(summa);
    if (onnistuiko == false){
        cout << "meni pieleen" << endl;
    }
    return onnistuiko;
}

void Asiakas::showSaldo()
{

    cout << "kayttotilin saldo = " << kayttotili.getBalance() << endl;
    cout << "luottotilin saldo = " << luottotili.getBalance() << endl;
}

bool Asiakas::luotonMaksu(double summa)
{
    cout << "asiakas" << nimi << " tallettaa luottotilille" << summa << endl;
    bool onnistuiko = luottotili.deposit(summa);
    if (onnistuiko == false){
        cout << "meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::luotonNosto(double summa)
{
    cout << "asiakas" << nimi << " nostaa luottotililta = " << summa << endl;
    bool onnistuiko = luottotili.withdraw(summa);
    if (onnistuiko == false){
        cout << "meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = nosto(summa);
    if (onnistuiko == true)
    {
        cout << "nosto tilisiirtoon onnistui" << "  jonka sai tilisiirrolla" << endl;
        saaja.talletus(summa);
        return onnistuiko;
    }
    else{
        cout << "nosto tilisiirton epaonnistui" << endl;
        return onnistuiko;
    }
}

string Asiakas::getNimi() const
{
    return nimi;
}
