#include <iostream>
using namespace std;

int digitSum(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    int n = 1212;
    cout << "Sum of digits of " << n << " is: " << digitSum(n);
    return 0;
}