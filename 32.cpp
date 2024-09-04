// Write a program in C++ to display the pattern like right angle triangle with number
#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;

    cout << "\n\n Display the pattern using numbers starting from 1:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j; // Print numbers in each row
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
