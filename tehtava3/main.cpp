#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef c_olio("Gordon");
    c_olio.makeSalad(10);
    c_olio.makeSoup(12);

    cout << endl;

    ItalianChef i_olio("Vegeta");
    c_olio.makeSalad(14);
    i_olio.askSecret("pizza",16,22);
    return 0;
}
