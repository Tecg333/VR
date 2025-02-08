#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja a("Jorma1");
    Seuraaja b("Seppo2");
    Seuraaja c("Ismo3");
    Seuraaja d("Jermu4");
    Seuraaja e("Keijo5");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();

    n.postita("tama on viesti 1 ");


    n.poista(&c);
    n.poista(&b);




    n.postita("tassa on viesti 2 ");




    return 0;
}
