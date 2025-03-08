#include <iostream>
using namespace std;

int octal(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 8) + 10 * octal(n / 8);
    }
}

int main()
{   
    int n = 40;
    cout << "octal equivalent of " << n << " is: " << octal(n) << endl;

    return 0;
}