#include <iostream>
#include "Rectange.h"

using namespace std;

#if 0
class Rectange{

public:
    Rectange();
    Rectange(int w, int h);
    void setWidth(int width)
    {
        this->width = width;
    }
    void setHeight(int height)
    {

        this->height = height;
    }

    int getarea()
    {
        return width*height;
    }

private:
    int width;
    int height;
};
#endif

Rectange::Rectange()
{
    this ->width = 5;
    this->height=6;
}

Rectange::Rectange(int w,int h):width(w),height(h)
{
    cout << "Constructor" << endl;
}
