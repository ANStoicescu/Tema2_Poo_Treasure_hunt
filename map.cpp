#include "map.h"

using namespace std;

map::map()
{
    size_=15;// De aici putem seta dimensiunea mapei
    size_+=2;
    mat_ = new int*[size_];
    for (int i = 0; i < size_; ++i)
        mat_ [i] = new int[size_];
    for(int i=0; i<size_; i++)
        for(int j=0; j<size_; j++)
            mat_[i][j]=0;
    for(int i=0; i<size_; i++)
        mat_[i][0]=mat_[0][i]=mat_[i][size_-1]=mat_[size_-1][i]=8;
    mat_[1][1]=mat_[1][size_-2]=mat_[size_-2][1]=mat_[size_-2][size_-2]=2;

    for(int i=1; i<=3; i++)
    {
        bool gate=0;
        while(gate==0)
        {
            treasure[i].x=rand()%(size_-2)+1;
            treasure[i].y=rand()%(size_-2)+1;
            if(mat_[treasure[i].x][treasure[i].y]==0)
            {
                mat_[treasure[i].x][treasure[i].y]=3;
                gate=1;
            }
        }
    }

}

int map::move_player(const location loc,const int direction)
{
    if(mat_[loc.x][loc.y-1]!=0&&mat_[loc.x+1][loc.y]!=0&&mat_[loc.x-1][loc.y]!=0&&mat_[loc.x][loc.y+1]!=0)
        return 3;
    if(direction==1) //N
    {
        if(mat_[loc.x][loc.y-1]==0)
        {
            mat_[loc.x][loc.y]=1;
            mat_[loc.x][loc.y-1]=2;
            return 1;
        }
        if(mat_[loc.x][loc.y-1]==3)
        {
            mat_[loc.x][loc.y]=1;
            return 2;
        }
    }
    if(direction==2) //E
    {
        if(mat_[loc.x+1][loc.y]==0)
        {
            mat_[loc.x][loc.y]=1;
            mat_[loc.x+1][loc.y]=2;
            return 1;
        }
        if(mat_[loc.x+1][loc.y]==3)
        {
            mat_[loc.x][loc.y]=1;
            return 2;
        }
    }
    if(direction==3) //S
    {
        if(mat_[loc.x][loc.y+1]==0)
        {
            mat_[loc.x][loc.y]=1;
            mat_[loc.x][loc.y+1]=2;
            return 1;
        }
        if(mat_[loc.x][loc.y+1]==3)
        {
            mat_[loc.x][loc.y]=1;
            return 2;
        }
    }
    if(direction==4) //V
    {
        if(mat_[loc.x-1][loc.y]==0)
        {
            mat_[loc.x][loc.y]=1;
            mat_[loc.x-1][loc.y]=2;
            return 1;
        }
        if(mat_[loc.x-1][loc.y]==3)
        {
            mat_[loc.x][loc.y]=1;
            return 2;
        }
    }
    return 0;
}

std::ostream& operator<<(std::ostream& out, map& Mat)
{
    for (int i = 0; i < Mat.size_; i++)
    {
        for (int j = 0; j < Mat.size_; j++)
            out<<Mat.mat_[i][j]<<' ';
        out<<'\n';
    }
    out<<'\n';
    return out;
}

map::~map()
{
    for (int i = 0; i < size_; ++i)
        delete [] mat_[i];
    delete [] mat_;
}
