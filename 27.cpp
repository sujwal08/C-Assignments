#include <iostream>
using namespace std;
int main()
{

    int prv = 0, pre = 1, nxt, i, n;

    cout << "\n\n Display the first n terms of Fibonacci series:\n"; // Displaying a message on the console
    cout << "---------------------------------------------------\n";
    cout << " Input number of terms to display: "; // Prompting the user to input the number of terms
    cin >> n;                                      // Reading the input value as the number of terms

    cout << " Here is the Fibonacci series up to " << n << " terms: " << endl; // Displaying a message indicating the number of terms for the Fibonacci series
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++)
    {
        nxt = prv + pre;
        cout << " " << nxt;
        prv = pre;
        pre = nxt;
    }
    cout << endl;
}