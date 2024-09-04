#include <iostream>
using namespace std;
int main()
{
    int n, term = 1, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += term;
        cout << term;
        if (i < n)
        {
            cout << " + ";
        }
        term = term * 10 + 1;
    }
    cout << " = " << sum << endl;
    return 0;
}