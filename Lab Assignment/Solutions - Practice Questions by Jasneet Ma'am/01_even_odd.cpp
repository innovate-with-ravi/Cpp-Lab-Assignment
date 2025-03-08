#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << ((n % 2 == 0) ? "Even" : "Odd") << endl;
    return 0;
}