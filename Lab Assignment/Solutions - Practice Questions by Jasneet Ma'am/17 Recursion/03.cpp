#include <iostream>
using namespace std;

long long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n = 20;
    for (int i = 1; i <= n; i++)
    {
        cout << fact(i) << " ";
    }

    return 0;
}