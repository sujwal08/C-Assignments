#include <iostream>
#include <string>

using namespace std;

string findTwosComplement(string binary)
{
    int n = binary.length();
    string onesComplement = "";
    string twosComplement = "";

    for (int i = 0; i < n; i++)
    {
        if (binary[i] == '0')
        {
            onesComplement += '1';
        }
        else
        {
            onesComplement += '0';
        }
    }

    bool carry = true; // To add 1
    for (int i = n - 1; i >= 0; i--)
    {
        if (onesComplement[i] == '1' && carry)
        {
            twosComplement = '0' + twosComplement;
        }
        else if (onesComplement[i] == '0' && carry)
        {
            twosComplement = '1' + twosComplement;
            carry = false;
        }
        else
        {
            twosComplement = onesComplement[i] + twosComplement;
        }
    }

    if (carry)
    {
        twosComplement = '1' + twosComplement;
    }

    return twosComplement;
}

int main()
{
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    string twosComplement = findTwosComplement(binary);

    cout << "Two's complement of " << binary << " is: " << twosComplement << endl;

    return 0;
}
