#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {-1, -22, 3, 4, -90, 89, 10, 20, 30, 40};

    for (int i = 0; i < 10; i++)
    {
        for (int j = (i + 1); j < 10; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}