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
    int **mat_;
    location treasure[4];
public:
    int size_;
    map();
    virtual ~map();
    int move_player(const location loc,const int direction);
    friend std::ostream& operator<<(std::ostream&, map&);
};

#endif
