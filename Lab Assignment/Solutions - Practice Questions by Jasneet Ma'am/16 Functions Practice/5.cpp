#include <iostream>
#include <cmath>
using namespace std;

float geoSum(int first_term, float common_ratio, int n)
{
    int &a = first_term;
    float &r = common_ratio;

    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (a * (pow(r, i)));
    }

    return sum;
}

int main()
{
    int a, n;
    float r;
    cout << "Enter first term(a), common ratio(r) and number of terms(n): ";
    cin >> a >> r >> n;

    cout << "Geometric sum upto " << n << " terms is: " << geoSum(a, r, n);
    return 0;
}