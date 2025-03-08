#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string str_rev = str;

    int l = 0;
    while (str_rev[l] != '\0')
    {
        l++;
    }

    for (int i = 0; i < (l / 2); i++)
    {
        char temp;
        temp = str_rev[i];
        str_rev[i] = str_rev[l - i - 1];
        str_rev[(l - i - 1)] = temp;
    }

    cout << "Reverse of " << str << " is: " << str_rev<<endl;

    return 0;
}