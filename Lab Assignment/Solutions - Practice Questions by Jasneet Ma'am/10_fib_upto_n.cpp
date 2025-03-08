#include <iostream>
using namespace std;

int main()
{
    int n, term1 = 0, term2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else
    {
        cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; i++)
        {
            cout << term1 << " ";
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }
        cout << endl;
    }

    return 0;
}
