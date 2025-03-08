#include <iostream>
using namespace std;

int main()
{
    int r1 = 2, c1 = 3;
    int &r2 = c1, c2 = 3;

    int m1[r1][c1] = {{1, 2, 3},  // 00 01 02
                      {4, 5, 6}}; // 10 11 12

    int m2[r2][c2] = {{1, 2, 3},  // 00 01 02
                      {1, 2, 3},  // 10 11 12
                      {1, 2, 3}}; // 20 21 22

    int m3[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int mul_element = 0;
            for (int k = 0; k < c2; k++)
            {
                mul_element += (m1[i][k] * m2[k][j]);
            }
            m3[i][j] = mul_element;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}