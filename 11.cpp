#include <iostream>
using namespace std;

string isPowerOfThree(int n)
{
    while (n % 3 == 0)
    {
        n = n / 3;
    }
    if (1 == n)
    {
        return "True";
    }
    else
    {
        return "False";
    }
}
int main(void)
{

    int n = 15;
    cout << "\nIf " << n << " is power of three? " << isPowerOfThree(n) << endl;

    n = 9;
    cout << "\nIf " << n << " is power of three? " << isPowerOfThree(n) << endl;

    n = 243;
    cout << "\nIf " << n << " is power of three? " << isPowerOfThree(n) << endl;

    return 0;
}