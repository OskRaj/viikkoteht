#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    int arvaustenmaara = 0;
    int arvaus;
    srand(time(NULL));
    int randomnumb = rand() % maxnum;
    int tarkistaja = 0;
    cout << "Arvaa luku 1-" << maxnum << endl;
    while(tarkistaja == 0)
    {
        arvaustenmaara++;
        cin >> arvaus;

        if(arvaus > randomnumb)
        {
            cout << "luku on pienempi" << endl;
        }
        else if(arvaus < randomnumb)
        {
            cout << "luku on suurempi" << endl;
        }
        else
        {
            cout << "OIKEIN!" << endl << "Arvausten maara; " << arvaustenmaara << endl;;
            tarkistaja = 1;
        }
    }
    return 0;
}

int main()
{
    int luku;
    cout << "Anna luku: " << endl;
    cin >> luku;
    game(luku);
}
