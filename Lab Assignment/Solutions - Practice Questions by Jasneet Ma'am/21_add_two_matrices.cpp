#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows and columns of two matrices: ";
    cin >> row >> col;

    int m1[row][col], m2[row][col], sum[row][col] = {0};

    cout << "Enter " << (row * col) << " elements for matrix-1(m1): ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter " << (row * col) << " elements for matrix-2(m2): ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> m2[i][j];
        }
    }

    // adding and printing elements of the matrices m1 and m2:-
    cout << "Sum of both the matrices is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}