#include <iostream>
using namespace std;

int main()
{
    int count = 0, i = 2;

    cout << "First 50 primes are: \n";
    while (count < 50)
    {
        bool is_i_prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_i_prime = false;
                break;
            }
        }

        if (is_i_prime)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }

    return 0;
}