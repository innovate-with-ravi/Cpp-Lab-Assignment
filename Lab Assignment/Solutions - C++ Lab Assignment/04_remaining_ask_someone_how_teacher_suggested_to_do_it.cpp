#include <iostream>
using namespace std;

// Write a menu driven program to perform following:
// a) Input a matrix
// b) Display matrix
// c) Add two matrix
// d) Multiply two matrixes
// e) Transpose a matrix

class Matrix
{
    int mat1[3][3];
    int mat2[3][3];

    void add()
    {
        cout << "Addition of two matrices: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << (mat1[i][j] + mat2[i][j]) << " ";
            }
            cout << endl;
        }
    }

    void multiply()
    {
        cout << "Multiplication of the matrices: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int mul_element = 0;
                for (int k = 0; k < 3; k++)
                {
                    mul_element += (mat1[i][k] * mat2[k][j]);
                }
                cout << mul_element << " ";
            }
            cout << endl;
        }
    }

    void transpose()
    {
        cout << "Transpose of mat1: \n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat1[j][i] << " ";
            }
            cout << endl;
        }

        cout << "Transpose of mat2: \n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat2[j][i] << " ";
            }
            cout << endl;
        }
    }

public:
    void inputMatrices()
    {
        cout << "Enter elements for (3X3) matrix mat1: ";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat1[i][j];
            }
        }

        cout << "Enter elements for (3X3) matrix mat2: ";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat2[i][j];
            }
        }
    }

    void displayMatrices()
    {
        cout << "mat1: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat1[i][j] << " ";
            }
            cout << endl;
        }

        cout << "mat2: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat2[i][j] << " ";
            }
            cout << endl;
        }
    }

    void operation()
    {
        int choice;
        cout << "Enter 1 to add the matrices, \n"
             << "Enter 2 to multiply the matrices, \n"
             << "Enter 3 to transpose the matrices, \n"
             << "Enter 4 exit: ";

        cin >> choice;
        switch (choice)
        {
        case 1:
            add();
            operation();
            break;
        case 2:
            multiply();
            operation();
            break;
        case 3:
            transpose();
            operation();
            break;
        case 4:
            return;

        default:
            cout << "Invalid Input!!\n";
            operation();
            break;
        }
    }
};

int main()
{
    Matrix M;
    M.inputMatrices();
    M.displayMatrices();
    M.operation();

    return 0;
}