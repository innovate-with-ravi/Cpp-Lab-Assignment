#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    bool is_prime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Composite";
    }

    return 0;
}