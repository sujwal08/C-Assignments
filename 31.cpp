#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;

    // Display message asking for input
    cout << "\n\n display the pattern like right angle triangle using an asterisk:\n";
    cout << "---------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;

    // Loop to print the right angle triangle pattern with asterisks
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
