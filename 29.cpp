#include <iostream>
using namespace std;

int main()
{
    int n, reversedNum = 0, rem;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        reversedNum = reversedNum * 10 + rem;
        n /= 10;
    }
    cout << "Reversed Number = " << reversedNum;
    return 0;
}