// String concepts
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}