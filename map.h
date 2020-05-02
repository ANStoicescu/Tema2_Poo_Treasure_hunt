#include <iostream>
#ifndef MAP_H
#define MAP_H

class map
{
    int size_;
    int **mat_;
public:
    map();
    virtual ~map();
    void move(int id);
    friend std::ostream& operator<<(std::ostream&, map&);
};

#endif
