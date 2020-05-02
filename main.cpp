#include <iostream>
#include "game.h"
using namespace std;

int main()
{
    int nr;
    cout << "Numarul de runde: ";
    cin>>nr;
    game Game;
    while(nr!=-2)
    {
        if(nr>0)
            Game.run(nr);
        if(nr==-1)
            Game=game();
        cout<<"Pentru a continua introduceti un numar de runde.\nPentru a incepe o simulare noua tastati -1.\nPentru a iesi din program tastati -2.\n";
        cin>>nr;
    }
    return 0;
}
