#include <iostream>
#include <string>
using namespace std;

string findLargestWord(const string &str)
{
    int maxLength = 0, length = 0;
    string largestWord, currentWord;

    for (char ch : str)
    {
        if (ch != ' ')
        {
            currentWord += ch;
            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;
                largestWord = currentWord;
            }
            currentWord = "";
            length = 0;
        }
    }

    // Check the last word
    if (length > maxLength)
    {
        largestWord = currentWord;
    }

    return largestWord;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string largestWord = findLargestWord(input);
    cout << "The largest word is: " << largestWord << endl;

    return 0;
}
