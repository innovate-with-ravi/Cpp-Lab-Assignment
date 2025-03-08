#include <iostream>
using namespace std;

int main()
{
    int size, sum = 0;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = (float(sum) / size);

    cout << "Average of all elements of array is: " << avg << endl;

    return 0;
}