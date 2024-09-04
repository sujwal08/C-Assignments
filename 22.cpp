#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter a number to find the last prime number before it: ";
    cin >> num;
    for (int a = num - 1; a >= 1; a--)
    {
        for (int b = 2; b < a; b++)
        {
            if (a % b == 0)
                count++;
        }
        if (count == 0)
        {
            if (a == 1)
            {
                cout << "no prime number less thann 2";
                break;
            }
            cout << a << " is the last prime number entered before number";
            break;
        }
        count = 0;
    }
    return 0;
}