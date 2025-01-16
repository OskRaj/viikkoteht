#include "game.h"
#include <iostream>

using namespace std;

int main()
{
    int maxNumber;
    cout << "Anna maksimiluku, johon asti haluat arvata: " << endl;
    cin >> maxNumber;

    Game play(maxNumber);
    play.play();
    return 0;
}
