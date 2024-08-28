#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string firstName, lastName;
    cout << "Enter your first name " << endl;
    cin >> firstName;
    cout << "Enter your last name " << endl;
    cin >> lastName;
    cout << "Name in reverse is: " << lastName << " " << firstName << endl;
    return 0;
}