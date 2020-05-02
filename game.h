#ifndef GAME_H
#define GAME_H
#include "map.h"
#include "players.h"

class game
{
    map Map_;
    players Players_=players(&Map_);
    int *order;
public:
    game();
    void run(int nr);
    void new_round();
    virtual ~game();
};

#endif