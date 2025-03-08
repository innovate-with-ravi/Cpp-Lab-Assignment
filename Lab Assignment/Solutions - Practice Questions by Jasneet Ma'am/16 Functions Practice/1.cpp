#include <iostream>
using namespace std;

void pali_500_to_1000()
{
    cout << "Pali form 500 to 1000 are: \n";
    for (int i = 500; i <= 1000; i++)
    {
        int rev = 0, i_cpy = i;
        while (i_cpy != 0)
        {
            rev = (rev * 10) + (i_cpy % 10);
            i_cpy /= 10;
        }
        if (rev == i)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    pali_500_to_1000();

    return 0;
}