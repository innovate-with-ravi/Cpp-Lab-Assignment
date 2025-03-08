#include <iostream>
using namespace std;

void first_100_odd()
{
    int count = 0;
    cout << "First 100 odd no.s are: ";

    int i = 1;
    while (count < 100)
    {
        cout << (i) << " ";
        i += 2;
        count++;
    }
}

int main()
{
    first_100_odd();
    return 0;
}