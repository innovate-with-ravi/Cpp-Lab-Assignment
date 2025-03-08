#include <iostream>
using namespace std;

int main()
{
    int n = 12321;
    int n_copy = n, n_rev = 0;

    while (n_copy != 0)
    {
        // n_rev *= 10;
        // n_rev += (n_copy % 10);
        n_rev = (n_rev * 10) + (n_copy % 10);
        n_copy /= 10;
    }

    cout << "n_rev: " << n_rev << '\n';
    if (n_rev == n)
    {
        cout << "Palindrome\n";
    }

    return 0;
}