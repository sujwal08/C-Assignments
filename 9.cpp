#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

// Function to compute the difference in days between two dates
int countDaysBetweenDates(int year1, int month1, int day1, int year2, int month2, int day2)
{
    // Struct to hold the date
    struct tm date1 = {0, 0, 0, day1, month1 - 1, year1 - 1900}; // month is 0-11 in struct tm
    struct tm date2 = {0, 0, 0, day2, month2 - 1, year2 - 1900};

    // Convert the dates to time_t format
    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    // Calculate the difference in seconds and convert to days
    double difference = difftime(time1, time2) / (60 * 60 * 24);

    return abs(static_cast<int>(difference)); // Return the absolute value of the difference
}

int main()
{
    int year1, month1, day1;
    int year2, month2, day2;

    // Prompt the user for the first date
    cout << "Enter the first date (YYYY MM DD): ";
    cin >> year1 >> month1 >> day1;

    // Prompt the user for the second date
    cout << "Enter the second date (YYYY MM DD): ";
    cin >> year2 >> month2 >> day2;

    // Calculate the number of days between the two dates
    int daysBetween = countDaysBetweenDates(year1, month1, day1, year2, month2, day2);

    // Display the result
    cout << "Days between " << setw(4) << setfill('0') << year1 << "/"
         << setw(2) << setfill('0') << month1 << "/" << setw(2) << setfill('0') << day1
         << " to " << setw(4) << setfill('0') << year2 << "/"
         << setw(2) << setfill('0') << month2 << "/" << setw(2) << setfill('0') << day2
         << " = " << daysBetween << endl;

    return 0;
}
