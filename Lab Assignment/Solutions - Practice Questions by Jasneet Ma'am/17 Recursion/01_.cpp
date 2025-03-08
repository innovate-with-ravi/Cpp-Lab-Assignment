#include <iostream>
using namespace std;

int bin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2) + 10 * bin(n / 2);
    }
}

int main()
{
    int n = 40;
    cout << "binary equivalent of " << n << " is: " << bin(n) << endl;
    
    return 0;
}