#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "ItalianChef default konstruktori"
         << endl;
}


ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "ItalianChef konstruktori" << ", kokin nimi "
         << name
         << endl;

}
ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori "
         << chefName
         << endl;

}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    if ((password.compare(pw)) == 0){
        cout << "salasana hyvaksytty" << endl;
        flour = f;
        water = w;
        int pizzat = makepizza();
        cout << "ItalianChef voi tehda "
             << pizzat
             << " pizzaa, "
             << flour
             << " osalla jauhoa ja "
             << water
             << " osalla vetta"
             << endl;
        return true;
    }

    else{
        cout << "salasana hylatty" << endl;
        return false;
    }
}

int ItalianChef::makepizza()
{
  return min(flour / 5, water / 5);
}
