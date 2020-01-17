#include <iostream>
#include "stdlib.h"
#include "time.h"

using namespace std;

int main()
{
    int guessnumber, secretnumber;
    srand(time(NULL));
    secretnumber = rand()%10 +1;

    return 0;
}
