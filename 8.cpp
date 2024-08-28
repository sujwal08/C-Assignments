#include <iostream>
using namespace std;

int main()
{
    int year, month, days;

    // Prompt the user for input
    cout << "Input Year: ";
    cin >> year;

    cout << "Input Month (01-12): ";
    cin >> month;

    // Check for the month and determine the number of days
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days = 29; // Leap year
        }
        else
        {
            days = 28; // Non-leap year
        }
        break;
    default:
        cout << "Invalid month!" << endl;
        return 1;
    }

    // Display the result
    cout << "Number of days of the year " << year << " and month " << month << " is: " << days << endl;

    return 0;
}
