#include <iostream>
using namespace std;

int addDigits(int num)
{
    return num - (num - 1) / 9 * 9;
}
int main(void)
{
    int n = 15;
    cout << "\nInitital number is " << n << " single digit number is " << addDigits(n) << endl;
    n = 57;
    cout << "\nInitital number is " << n << " single digit number is " << addDigits(n) << endl;
    return 0;
}