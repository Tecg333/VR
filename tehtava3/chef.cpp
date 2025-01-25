#include "chef.h"

Chef::Chef() {
    cout << " Chef default konstruktori"
         << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori,kokin nimi "
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "Chef destruktori "
         << chefName
         << endl;
}

int Chef::makeSalad(int aines)
{   int annoksia = aines / 5;
    cout << "Salaatti aineksia "
         << aines
         << ", joista voidaan tehda "
         << annoksia
         << " salaatti annosta"
         << endl;
    return annoksia;
}

int Chef::makeSoup(int aines)
{
    int annoksia = aines / 3;
    cout << "Keitto aineksia "
         << aines
         << ", joista voidaan tehda "
         << annoksia
         << " keitto annosta"
         << endl;
    return annoksia;
}

string Chef::getChefName() const
{
    return chefName;
}
