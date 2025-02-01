#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;


int main()
{


    Asiakas Jukka(" Jukka",1000);
    Jukka.showSaldo();
   Asiakas Pekka(" Pekka",500);
    Pekka.showSaldo();
    Jukka.talletus(3000);
    Pekka.talletus(120);
    Pekka.luotonNosto(500);
    Pekka.nosto(100);
    Jukka.tiliSiirto(50,Pekka);


   return 0;
}
