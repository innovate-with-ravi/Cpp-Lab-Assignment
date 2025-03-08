#include <iostream>
using namespace std;

int main()
{
    int n, n_cpy, rev = 0;
    cout << "Enter n: ";
    cin >> n;

    n_cpy = n;

    while (n_cpy != 0)
    {
        rev = (rev * 10) + (n_cpy % 10);
        n_cpy /= 10;
    }

    cout << "Reverse of " << n << " is: " << rev;

    return 0;
}