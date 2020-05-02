#include "players.h"

using namespace std;

players::players(map *map_)
{
    Map_=map_;
}

bool players::move(int id)
{
    Map_->move(id);
    return 1;
}

void players::remove(int id)
{

}

players::~players()
{

}
