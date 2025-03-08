#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0, no_of_vowels = 0;
    while (str[i] != '\0')
    {
        if ((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U') || (str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            no_of_vowels++;
        }
        i++;
    }

    cout << "Number of vowels in " << str << " is: " << no_of_vowels << endl;

    return 0;
}