#include <iostream>
using namespace std;

int main()
{
    cout << "Even numbers b/w 100 and 200 are: ";
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}