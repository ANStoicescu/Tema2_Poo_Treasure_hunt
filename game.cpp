#include "game.h"

using namespace std;

int rand_vector(int order[])//seteaza o ordine aleatoare a playerilor in vectorul ordine
{
    bool order_aux[5];
    for(int i=1; i<=4; i++)order_aux[i]=0;
    int aux=rand()%4+1;
    for(int i=1; i<=4; i++)
    {
        order[i]=aux;
        order_aux[order[i]]=1;
        aux=rand()%4+1;
        while(order_aux[aux]!=0&&i!=4)
        {
            aux=aux%4+1;
            if(aux==0)aux++;
        }
    }
}

game::game()
{
    order = new int[5];
    rand_vector(order);
    cout<<"Ordinea playerilor este: ";
    for(int i=1; i<=4; i++)cout<<order[i]<<' ';
    cout<<'\n';
    nr_players=4;
}

void game::run(int nr)
{
    while(nr-- && nr_players>1)
    {
        for(int i=1; i<=4; i++)
        {
            if(order[i]==0)continue;
            int gate=Players_.move(order[i]);
            if(gate==1)
            {
                cout<<"Playerul cu id-ul "<<order[i]<<" a gasit o comoara si a fost eliminat de pe mapa\n";
                order[i]=0;
                nr_players--;
            }
            if(gate==3)
            {
                cout<<"Playerul cu id-ul "<<order[i]<<" nu mai are nici o mutare valida asa ca a fost eliminat\n";
                order[i]=0;
                nr_players--;
            }
        }
        cout<<"Mapa arata acum asa:\n";
        cout<<Map_;
    }
}

game::~game()
{
    //delete [] order;
}
