#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    //cout << "How are you doing" <<endl;

    cerr << "There was an error!" << endl;

    string name;

    cout << "Please type your name" << endl;
    cin >> name;

    cout << "Your name is: " << name << endl;
    return 0;
}

