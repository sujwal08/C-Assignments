/* Write a C++ program to implement a class called Employee that has private
member variables for name, employee ID, and salary. Include member functions to
calculate and set salary based on employee performance.*/

/* Write a C++ program to implement a class called Employee that has private
member variables for name, employee ID, and salary. Include member functions to
calculate and set salary based on employee performance.*/

#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double baseSalary)
    {
        name = empName;
        employeeID = empID;
        salary = baseSalary;
    }
    void setSalary(double performanceRating)
    {
        if (performanceRating < 1 || performanceRating > 5)
        {
            cout << "Invalid performance rating. Please enter a rating between 1 and 5." << endl;
            return;
        }
        double bonus = 0;
        if (performanceRating == 5)
        {
            bonus = salary * 0.20; // 20% bonus
        }
        else if (performanceRating == 4)
        {
            bonus = salary * 0.10; // 10%
        }
        else if (performanceRating == 3)
        {
            bonus = salary * 0.05; // 5%
        }
        else if (performanceRating < 3) // no bonus
        {
            bonus = 0;
        }
        salary += bonus;
        cout << "Salary updated based on performance. " << endl;
    }
    void displayEmployeeDetails()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Current Salary: $" << salary << endl;
    }
};
int main()
{
    Employee emp1("Aashsih Bhatta", 101, 50000);
    emp1.displayEmployeeDetails();

    double performanceRating;
    cout << "\nEnter performance rating (1-5) for the employee: ";
    cin >> performanceRating;
    emp1.setSalary(performanceRating);
    // Display updated employee details
    cout << "\nUpdated Employee Details:" << endl;
    emp1.displayEmployeeDetails();
    return 0;
}