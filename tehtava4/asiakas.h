#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;


class Asiakas
{
public:
    Asiakas(string o, double lr);
    bool talletus(double);
    bool nosto(double);
    void showSaldo();
    bool luotonMaksu(double);
    bool luotonNosto(double);

    bool tiliSiirto(double summa, Asiakas &saaja);


    string getNimi() const;

private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;

};

#endif // ASIAKAS_H
