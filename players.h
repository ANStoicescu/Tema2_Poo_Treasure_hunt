#ifndef PLAYERS_H
#define PLAYERS_H
#include "map.h"

class players
{
    map *Map_;
public:
    players(map *map_);
    bool move(int id);
    void remove(int id);
    virtual ~players();
};

#endif
