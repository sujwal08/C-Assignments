// Write a function that converts a given character into lowercase if it is in uppercase and vice-versa

#include <iostream>
#include <ctype.h>
using namespace std;
char charConversion(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        cout << "Character is Uppercase" << endl;
        c = c + 32;
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << "Character is Lowercase" << endl;
        c = c - 32;
    }
    return c;
};
int main()
{
    char c, ch;
    cout << "Enter a character: ";
    cin >> c;
    ch = charConversion(c);
    cout << "The converted character is " << ch << endl;
}