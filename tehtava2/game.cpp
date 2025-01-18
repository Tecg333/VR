#include "game.h"
#include <iostream>
#include <ctime>
using namespace std;

game::game(int maxnum) {
    maxNumber = maxnum;
    numOfGuesses = 0;
    randomNumber = 0;

    srand(time(NULL));
    randomNumber = rand() % maxnum;
}

game::~game(){

}
void game::play(){
    while (true){
        cout << "Anna luku?"
             << endl;
        cin >> playerGuess;
        numOfGuesses++;
        if (playerGuess == randomNumber) {
            cout << "Oikein!"
                 << endl;
            break;
        }

        if (playerGuess < randomNumber) {
            cout << "luku on suurempi"
                 << endl;
        }

        if (playerGuess > randomNumber) {
            cout << "luku on pienempi"
                 << endl;
        }


    }
    printGameResult();
}

void game::printGameResult(){
    cout << "Arvauksia:"
         << numOfGuesses
         << " oikea vastaus:"
         << randomNumber << endl;
}
