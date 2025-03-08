#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int no_of_terms = 20;
    cout << "Fib series for " << no_of_terms << " terms is: ";

    for (int i = 1; i <= no_of_terms; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}