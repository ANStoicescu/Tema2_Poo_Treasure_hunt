#ifndef PLAYERS_H
#define PLAYERS_H
#include "map.h"

class players
{
    map *Map_;
    location player_1_loc,player_2_loc,player_3_loc,player_4_loc;
public:
    players(map *map_);
    int move(int id);
    int player_1_move();
    int player_2_move();
    int player_3_move();
    int player_4_move();
    virtual ~players();
};

#endif
