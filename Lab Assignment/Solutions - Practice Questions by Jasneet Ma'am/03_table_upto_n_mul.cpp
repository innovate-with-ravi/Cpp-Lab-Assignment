#include <iostream>
using namespace std;

int main()
{
    int num, mul;
    cout << "Enter number and its multiples: ";
    cin >> num >> mul;

    for (int i = 1; i <= mul; i++)
    {
        cout << num << " X " << i << " = " << (num * i) << endl;
    }

    return 0;
}