#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "sum of first " << n << " natural no.s is: " << sum << endl;

    return 0;
}