#include <iostream>
using namespace std;
class Student
{
private:
    string name, address;
    int age, phone;

public:
    void input()
    {
        cout << " Enter details: ";
        cin >> name >> age >> address >> phone;
    }
    void display()
    {
        cout << " Name: " << name << endl;
        cout << " Age: " << age << endl;
        cout << " Address: " << address << endl;
        cout << " Phone: " << phone << endl;
    }
    void addressFromKtm()
    {
        if (address == "Kathmandu")
        {
            display();
        }
    }
};
int main()
{
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].input();
    }
    cout << "Students from KTM" << endl;
    for (int i = 0; i < 5; i++)
    {
        s[i].addressFromKtm();
    }
    return 0;
}