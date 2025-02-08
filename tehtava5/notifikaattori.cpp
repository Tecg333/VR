#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *uusiseur)
{

    uusiseur->next = seuraajat;

      seuraajat = uusiseur;
    cout << "lisataan seuraaja " << uusiseur->getNimi() <<  " listaan" << endl;

}

void Notifikaattori::poista(Seuraaja *poistaseur)
{

    if (seuraajat == poistaseur) {
        cout << "poistetaan " << poistaseur->getNimi() << " listasta" << endl;
        Seuraaja *alku = seuraajat;
        seuraajat = seuraajat->next;
        return;
    }
        Seuraaja *alku = seuraajat;
        while (alku != nullptr ) {
            if (alku->next == poistaseur) {
            cout << "poistetaan " << poistaseur->getNimi() << " listasta" << endl;

                alku->next = poistaseur->next;
                return;
            }

            alku = alku->next;
        }
}

void Notifikaattori::tulosta()
{
    cout << "seuraajat: " << endl;

    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        cout << alku->getNimi() << endl;
        alku = alku->next;
    }
}
void Notifikaattori::postita(string v)
{   cout << "postattu viesti: " << v << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){

        alku->paivitys(v);
            alku = alku->next;
    }
}
