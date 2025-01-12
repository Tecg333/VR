#include <iostream>
#include <ctime>
using namespace std;

int game(int maxnum);

int main()
{
    int maxnum = 40;
    int arvausten_lkm = game(maxnum);


    cout << "Arvauksia:"
         << arvausten_lkm
         << endl;

    return 0;
}
int game(int maxnum){
    int arvausten_lkm = 0;
    int arvaus = 0;
    int satunnaisluku = 0;

    cout << "Maxnum="
         << maxnum
         << endl;

    srand(time(NULL));
    satunnaisluku = rand() % maxnum;

    while (true){
        cout << "Anna luku?"
             << endl;
        cin >> arvaus;
        arvausten_lkm++;
        if (arvaus == satunnaisluku) {
            cout << "Oikein!"
                 << endl;
            break;
        }

        if (arvaus < satunnaisluku) {
            cout << "luku on suurempi"
                 << endl;
        }

        if (arvaus > satunnaisluku) {
            cout << "luku on pienempi"
                 << endl;
        }


    }

    return arvausten_lkm;



}
