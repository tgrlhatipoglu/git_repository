#include <iostream>

using namespace std;

int main()
{
    auto func = [](){
    cout << "Hello World!" << endl;
    };

    func();

    int sum = [](int a, int b)->int{
       return a+b;
    }(3,7);

    cout << "sum = "<< sum <<endl;


    //Capturing by value
#if 0
    int c = 42;

    auto func2 = [c](){
        cout << "c inner value is: " << c << endl;
    };

    for(int i=1;i<=5;i++)
    {
        func2();
        cout << "c outer value is: " << c << endl;
        c++;
    }

    //Capturing by referance

    int c = 42;

    auto func2 = [&c](){
        cout << "c inner value is: " << c << endl;
    };

    for(int i=1;i<=5;i++)
    {
        func2();
        cout << "c outer value is: " << c << endl;
        c++;
    }


    //Capturing everyting by value

    int c = 42;
    int d = 4;

    auto func2 = [=](){
        cout << "c inner value is: " << c << endl;
        cout << "d inner value is: " << d << endl;
    };

    for(int i=1;i<=5;i++)
    {
        func2();
        cout << "c outer value is: " << c << endl;
        c++;
    }
   #endif
    //Capturing everyting by refarance

    int c = 42;
    int d = 4;

    auto func2 = [&](){
        cout << "c inner value is: " << c << endl;
        cout << "d inner value is: " << d << endl;
    };

    for(int i=1;i<=5;i++)
    {
        func2();
        cout << "c outer value is: " << c << endl;
        c++;
    }

    return 0;
}

