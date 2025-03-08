#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two no: ";
    cin >> n1 >> n2;

    (n1 > n2) ? (cout << n1 << " is greater\n") : (cout << n2 << " is greater\n");
    return 0;
}