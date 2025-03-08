#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 3;
    int mat[rows][cols] = {{1, 2, 3},
                           {4, 5, 6}};

    cout << "Transpose is: " << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}