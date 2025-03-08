#include <iostream>
using namespace std;

// 1.Write a program to display the minimum, maximum, sum, search and average of elements of an array.

class Array
{
    int size;
    int arr[];

public:
    void setData()
    {
        cout << "Enter size of array: ";
        cin >> size;
        cout << "Enter " << size << " elements of array: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    int minElement()
    {
        int min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        return min;
    }

    int maxElement()
    {
        int max = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        return max;
    }

    int sumOfElements()
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }

        return sum;
    }

    float avgOfElements()
    {
        return (sumOfElements() / float(size));
    }

    void search();
};

void Array::search()
{
    int n;
    cout << "Enter the element (n) to search: ";
    cin >> n;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << arr[i] << " is found at index: " << i << endl;
        }
    }
}

int main()
{
    Array arr;
    arr.setData();
    cout << "Average of all elements is: " << arr.avgOfElements() << endl;
    cout << "Sum of all elements is: " << arr.sumOfElements() << endl;
    cout << "Max element of array is: " << arr.maxElement() << endl;
    cout << "Min element of array is: " << arr.minElement() << endl;
    arr.search();

    return 0;
}