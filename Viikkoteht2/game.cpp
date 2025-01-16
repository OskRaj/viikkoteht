#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

Game::Game(int max)
{
    maxNumber = max;
    checker = 0;
    numOfGuesses = 0;
    cout << "GAME CONSTRUCTOR: Maksiminumeroksi asetettu: " << maxNumber << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: Peli paattyi" << endl;
}


void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber;
    cout << "Arvaa arvottu luku 1-" << maxNumber << ":" << endl;
    while(checker == 0)
    {
        numOfGuesses++;
        cin >> playerGuess;

        if(playerGuess > randomNumber)
        {
            cout << "arvottu luku on pienempi, arvaa uudelleen: " << endl;
        }
        else if(playerGuess < randomNumber)
        {
            cout << "arvottu luku on suurempi, arvaa uudelleen" << endl;
        }
        else
        {
            printGameResult();
            checker = 1;
        }
    }
}
void Game::printGameResult()
{
    cout << "OIKEIN!" << endl << "Arvausten maara: " << numOfGuesses << endl;
}
