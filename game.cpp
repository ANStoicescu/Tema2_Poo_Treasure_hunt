#include "game.h"

using namespace std;

game::game()
{
    order = new int[5];

}

void game::run(int nr)
{
    while(nr--)
    {
        for(int i=0; i<4; i++)
            if(Players_.move(order[i])==1)
            {
                Players_.remove(order[i]);
                cout<<"Playerul cu id-ul "<<order[i]<<" a gasit o comoara si a fost eliminat de pe mapa\n";
            }
        cout<<"Mapa arata acum asa:\n";
        cout<<Map_;
    }
}

game::~game()
{

}
