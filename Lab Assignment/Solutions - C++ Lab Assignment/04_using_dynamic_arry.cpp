#include <iostream>
using namespace std;

class Matrix
{
    int rows, cols;
    int **mat;

public:
    void inputMatrix()
    {
        cout << "Enter no. of rows and columns: ";
        cin >> rows >> cols;

        // allocating memory for each row:
        mat = new int *[rows];

        // allocating memory for each column:
        for (int i = 0; i < rows; i++)
        {
            mat[i] = new int[cols];
        }

        cout << "Enter " << (rows * cols) << " elements: ";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void displayMatrix()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] mat[i];
        }
        delete[] mat;
    }
};

int main()
{
    Matrix m1;
    m1.inputMatrix();
    m1.displayMatrix();
    return 0;
}