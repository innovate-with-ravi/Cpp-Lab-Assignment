#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    long long fact = 1;

    while (n >= 1)
    {
        fact *= n--;
    }

    cout << "Factorial of " << n << " is: " << fact << endl;

    return 0;
}