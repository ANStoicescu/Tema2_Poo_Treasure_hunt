#include "game.h"
using namespace std;

int main()
{
    int nr;
    cout << "Numarul de runde: ";
    cin>>nr;
    game Game;
    while(nr!=0)
    {
        if(nr>0)
            Game.run(nr);
        if(nr==-1)
        {
            Game.~game();
            Game=game();
        }
        cout<<"Pentru a continua introduceti numarul de runde.\nPentru a incepe o simulare noua introduceti -1.\nPentru a iesi din program introduceti 0.\n";
        cin>>nr;
    }
    return 0;
}
