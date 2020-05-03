#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <stdlib.h>

struct location
{
    int x,y;
};

class map
{
    int size_;
    int **mat_;
    location treasure[4];
public:
    map();
    virtual ~map();
    int move_player(location loc,int direction);
    friend std::ostream& operator<<(std::ostream&, map&);
};

#endif
