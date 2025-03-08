#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int l = str.length();

    string str_rev;
    str_rev.resize(l);

    for (int i = 0; i < l; i++)
    {
        str_rev[i] = str[(l - i - 1)];
    }

    cout << "Reverse of " << str << " is: " << str_rev << endl;

    if (str_rev == str)
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "Not Palindrome\n";
    }

    return 0;
}