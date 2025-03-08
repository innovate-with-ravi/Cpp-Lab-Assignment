#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string str1, string str2)
{

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return (str1 == str2);
}

int main()
{
    string str1;
    string str2;

    cout << "Enter two strings: ";
    getline(cin, str1);
    getline(cin, str2);

    if (anagram(str1, str2))
    {
        cout << "Anagram\n";
    }
    else
    {
        cout << "Not Anagram\n";
    }

    return 0;
}