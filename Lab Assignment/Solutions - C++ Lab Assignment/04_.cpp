#include <iostream>

using namespace std;

class matrix
{
    int arr1[3][3];
    int arr2[3][3];

public:
    void Switch(int button)
    {
        switch (button)
        {
        case 1:
            inputdata();
            break;
        case 2:
            displaydata();
            break;
        case 3:
            add();
            break;
        case 4:
            multiply();
            break;
        case 5:
            transpose();
            break;
        default:
            printf("Default case is Matched.");
            break;
        }
    }
    void inputdata()
    {
        cout << "array 1:";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr1[i][j];
            }
        }
        cout << "array 2:";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr2[i][j];
            }
        }
    }
    void displaydata()
    {
        cout << "array 1:";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
        cout << "array 2:";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add()
    {
        cout << "sum of two matrix";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int r = arr1[i][j] + arr2[i][j];
                cout << r << " ";
            }
            cout << endl;
        }
    }

    void multiply()
    {
        printf("the resultant matrix\n");
        for (int i = 0; i < 3; i++)
        {
            int d = 0;
            for (int j = 0; j < i; j++)
            {
                d = arr2[i][j];
                arr2[i][j] = arr2[j][i];
                arr2[j][i] = d;
            }
        }
        int r = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    r = arr1[i][k] * arr2[j][k] + r;
                }
                cout << r << " ";
            }
            cout << endl;
        }
    }
    void transpose()
    {
        cout << "transpose of both matrix:";
        for (int i = 0; i < 3; i++)
        {
            int d = 0;
            for (int j = 0; j < i; j++)
            {
                d = arr1[i][j];
                arr1[i][j] = arr1[j][i];
                arr1[j][i] = d;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int d = 0;
            for (int j = 0; j < i; j++)
            {
                d = arr2[i][j];
                arr2[i][j] = arr2[j][i];
                arr2[j][i] = d;
            }
        }
        displaydata();
    }
};

int main()
{
    matrix m1;
    cout << "enter 1 for input matrix:" << endl;
    cout << "enter 2 for output matrix:" << endl;
    cout << "enter 3 for add two matrix:" << endl;
    cout << "enter 4 for multiply two matrix:" << endl;
    cout << "enter 5 for transpose of matrix:" << endl;
    int button;
    cout << "enter button:";
    cin >> button;
    m1.Switch(button);
    cout << "enter button:";
    cin >> button;
    m1.Switch(button);
    cout << "enter button:";
    cin >> button;
    m1.Switch(button);
    return 0;
}