#include <iostream>
using namespace std;

int bin_to_dec(int n)
{
    int dec = 0;
    int pow = 1;
    while (n != 0)
    {
        dec += (n % 10) * pow;
        pow *= 2;
        n /= 10;
    }

    return dec;
}

int octal_to_dec(int n)
{
    int dec = 0;
    int pow = 1;
    while (n != 0)
    {
        dec += (n % 10) * pow;
        pow *= 8;
        n /= 10;
    }

    return dec;
}

int hex_to_dec(string str)
{
    int l = str.length();

    int dec = 0;
    int pow = 1;
    int n;

    for (int i = (l - 1); i >= 0; i--)
    {
        if ((str[i] >= 'A') && (str[i] <= 'F'))
        {
            n = 10 + (str[i] - 'A');
        }
        else if ((str[i] >= '0') && (str[i] <= '9'))
        {
            // Converting char to int!
            n = (str[i] - '0');
        }
        else
        {
            cout << "Invalid hex!\n";
            return -1;
        }

        dec += (n * pow);
        pow *= 16;
    }
    return dec;
}

int main()
{
    int bin = 1111100;
    cout << "Decimal equivalent for binary" << bin << " is: " << bin_to_dec(bin) << endl;

    int oct = 777;
    cout << "Decimal equivalent for octal " << oct << " is: " << octal_to_dec(oct) << endl;

    string hex = "1A29";
    cout << "Decimal equivalent for hex " << hex << " is: " << hex_to_dec(hex) << endl;

    return 0;
}