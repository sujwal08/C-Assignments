#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0;
    cout << "\n\n Find the number and sum of all integers between 100 and 200, divisible by 9:\n";
    cout << "--------------------------------------------------------------------------------\n";
    cout << " Numbers between 100 and 200, divisible by 9: " << endl;
    for (i = 100; i < 200; i++)
    {
        if (i % 9 == 0)
        {
            cout << " " << i;
            sum += i;
        }
    }
    cout << " The sum : " << sum << endl;
}