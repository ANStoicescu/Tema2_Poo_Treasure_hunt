#include "players.h"

using namespace std;

players::players(map *map_)
{
    Map_=map_;
    player_1_loc.x=1;
    player_1_loc.y=1;
    player_2_loc.x=1;
    player_2_loc.y=Map_->size_-2;
    player_3_loc.x=Map_->size_-2;
    player_3_loc.y=1;
    player_4_loc.x=Map_->size_-2;
    player_4_loc.y=Map_->size_-2;//initializez locatiile initiale ale playerilor
}

int players::player_1_move()
{
    int direction;
    int gate=0;
    while(gate==0)
    {
        direction=rand()%4+1;
        //cout<<direction;
        gate=Map_->move_player(player_1_loc,direction);
    }
    if(gate==1)
    {
        if(direction==1) //N
            player_1_loc.y--;
        if(direction==2) //E
            player_1_loc.x++;
        if(direction==3) //S
            player_1_loc.y++;
        if(direction==4) //V
            player_1_loc.x--;
        return 0;
    }
    else if(gate==3)return 3;
    else return 1;
}

int players::player_2_move()
{
    int direction;
    int gate=0;
    while(gate==0)
    {
        direction=rand()%4+1;
        //cout<<direction;
        gate=Map_->move_player(player_2_loc,direction);
    }
    if(gate==1)
    {
        if(direction==1) //N
            player_2_loc.y--;
        if(direction==2) //E
            player_2_loc.x++;
        if(direction==3) //S
            player_2_loc.y++;
        if(direction==4) //V
            player_2_loc.x--;
        return 0;
    }
    else if(gate==3)return 3;
    else return 1;
}

int players::player_3_move()
{
    int direction;
    int gate=0;
    while(gate==0)
    {
        direction=rand()%4+1;
        //cout<<direction;
        gate=Map_->move_player(player_3_loc,direction);
    }
    if(gate==1)
    {
        if(direction==1) //N
            player_3_loc.y--;
        if(direction==2) //E
            player_3_loc.x++;
        if(direction==3) //S
            player_3_loc.y++;
        if(direction==4) //V
            player_3_loc.x--;
        return 0;
    }
    else if(gate==3)return 3;
    else return 1;
}

int players::player_4_move()
{
    int direction;
    int gate=0;
    while(gate==0)
    {
        direction=rand()%4+1;
        //cout<<direction;
        gate=Map_->move_player(player_4_loc,direction);
    }
    if(gate==1)
    {
        if(direction==1) //N
            player_4_loc.y--;
        if(direction==2) //E
            player_4_loc.x++;
        if(direction==3) //S
            player_4_loc.y++;
        if(direction==4) //V
            player_4_loc.x--;
        return 0;
    }
    else if(gate==3)return 3;
    else return 1;
}

int players::move(const int id)
{
    if(id==1)
    {
        return this->player_1_move();
    }
    else if(id==2)
    {
        return this->player_2_move();
    }
    else if(id==3)
    {
        return this->player_3_move();
    }
    else if(id==4)
    {
        return this->player_4_move();
    }
}

players::~players()
{

}
