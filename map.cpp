#include "map.h"

using namespace std;

map::map()
{
    size_=16;
    mat_ = new int*[size_];
    for (int i = 0; i < size_; ++i)
        mat_ [i] = new int[size_];
    for(int i=0; i<size_; i++)
        for(int j=0; j<size_; j++)
            mat_[i][j]=0;

}

void map::move(int id)
{
    mat_[1][1]++;
}

std::ostream& operator<<(std::ostream& out, map& Mat)
{
    for (int i = 1; i < Mat.size_; i++)
    {
        for (int j = 1; j < Mat.size_; j++)
            out<<Mat.mat_[i][j]<<' ';
        out<<'\n';
    }
    out<<'\n';
    return out;
}

map::~map()
{
    for (int i = 0; i < 16; ++i)
        delete [] mat_[i];
    delete [] mat_;
}
