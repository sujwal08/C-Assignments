/*. Write a C++ program to implement a class called Date that has private member
variables for day, month, and year. Include member functions to set and get these
variables, as well as to validate if the date is valid.*/
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int Day, int Month, int Year)
    {
        setDay(Day);
        setMonth(Month);
        setYear(Year);
    }

    // Setter for day with validation
    void setDay(int Day)
    {
        if (Day >= 1 && Day <= 31)
        {
            day = Day;
        }
        else
        {
            cout << "Invalid day! Setting day to 1." << endl;
            day = 1;
        }
    }

    // Setter for month with validation
    void setMonth(int Month)
    {
        if (Month >= 1 && Month <= 12)
        {
            month = Month;
        }
        else
        {
            cout << "Invalid month! Setting month to 1." << endl;
            month = 1; // Default to January if invalid
        }
    }

    // Setter for year
    void setYear(int Year)
    {
        year = Year;
    }

    // Getter for day
    int getDay()
    {
        return day;
    }

    // Getter for month
    int getMonth()
    {
        return month;
    }

    // Getter for year
    int getYear()
    {
        return year;
    }

    // Function to validate the date
    bool isValidDate()
    {
        // Checking for valid day and month range
        if (month < 1 || month > 12 || day < 1 || day > 31)
        {
            return false;
        }

        // Checking for valid days in each month
        if (month == 2) // February
        {
            if (isLeapYear() && day > 29)
                return false;
            if (!isLeapYear() && day > 28)
                return false;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) // April, June, September, November
        {
            if (day > 30)
                return false;
        }

        return true;
    }

    // Function to check if the year is a leap year
    bool isLeapYear()
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            return true;
        }
        return false;
    }

    // Function to display the date
    void displayDate()
    {
        if (isValidDate())
        {
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        }
        else
        {
            cout << "Invalid date!" << endl;
        }
    }
};

int main()
{
    // Creating a Date object
    Date date1(29, 2, 2024); // Leap year example
    date1.displayDate();

    // Another date
    Date date2(31, 4, 2023); // Invalid date: April 31 doesn't exist
    date2.displayDate();

    return 0;
}