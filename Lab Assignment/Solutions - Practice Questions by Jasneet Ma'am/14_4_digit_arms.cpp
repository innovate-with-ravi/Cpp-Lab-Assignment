#include <iostream>
using namespace std;

int main()
{
    for (int i = 1000; i <= 9999; i++)
    {
        int arm = 0, i_cpy = i;

        while (i_cpy != 0)
        {
            arm += ((i_cpy % 10) * (i_cpy % 10) * (i_cpy % 10) * (i_cpy % 10));
            i_cpy /= 10;
        }

        if (arm == i)
        {
            cout << "arm: " << i << endl;
            // cout << i << " ";
        }
    }

    return 0;
}