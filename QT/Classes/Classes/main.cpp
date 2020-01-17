#include <iostream>
#include "Rectange.h"

using namespace std;



class Square: public Rectange
{
    public:
    Square(int side):Rectange(side,side)
    {

    }

};

int main()
{
    Square s(10);
    cout << "Area: " << s.getarea()<<endl;
    cout << "Hello World!" << endl;
    return 0;
}

