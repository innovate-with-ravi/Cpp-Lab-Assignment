#include <iostream>
using namespace std;

string dec_to_hex(int n)
{
    string hex;

    int hex_len = 0;
    int n_cpy = n;
    while (n_cpy != 0)
    {
        hex_len++;
        n_cpy /= 16;
    }
    hex.resize(hex_len);
    // cout << "hex_len: " << hex_len << endl;
    // cout << "hex[1]: " << hex[1] << endl;

    while (n != 0)
    {
        if (((n % 16) >= 10) && ((n % 16) <= 15))
        {
            hex[--hex_len] = (char)((n % 16) + 55);
        }
        else if (((n % 16) >= 0) && ((n % 16) <= 9))
        {
            hex[--hex_len] = (char)((n % 16) + '0');
        }
        else
        {
            return "Negative Decimal no. can't be converted into Hex\n";
        }

        n /= 16;
    }
    return hex;
}

int dec_to_bin(int n)
{
    int bin = 0;
    int pow = 1;
    while (n != 0)
    {
        bin += ((n % 2) * pow);
        pow *= 10;
        n /= 2;
    }

    return bin;
}

int dec_to_oct(int n)
{
    int oct = 0;
    int pow = 1;

    while (n != 0)
    {
        oct += ((n % 8) * pow);
        pow *= 10;
        n /= 8;
    }

    return oct;
}

int main()
{
    int dec_n = 10;
    cout << "Hex equvivalent for decimal " << dec_n << " is: " << dec_to_hex(dec_n) << endl;

    cout << "Binary equvivalent for decimal " << dec_n << " is: " << dec_to_bin(dec_n) << endl;

    cout << "Octal equvivalent for decimal " << dec_n << " is: " << dec_to_oct(dec_n) << endl;

    return 0;
}