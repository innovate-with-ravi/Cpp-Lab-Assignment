#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, n_cpy, arm = 0;
    cout << "Enter n: ";
    cin >> n;
    n_cpy = n;

    int no_of_digit = 0;
    while (n_cpy != 0)
    {
        no_of_digit++;
        n_cpy /= 10;
    }
    n_cpy = n;
    // cout << no_of_digit << endl;

    while (n_cpy != 0)
    {
        arm += round(pow((n_cpy % 10), no_of_digit));
        n_cpy /= 10;
    }
    // cout << arm << endl;
    if (n == arm)
    {
        cout << "Armstrong\n";
    }
    else
    {
        cout << "Not Armstrong\n";
    }

    return 0;
}