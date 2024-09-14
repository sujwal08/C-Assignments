#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool capitalize = true;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (isspace(str[i]))
        {
            capitalize = true;
        }
        else if (capitalize && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            capitalize = false;
        }
    }
    cout << "Capitalized string: " << str << endl;
    return 0;
}