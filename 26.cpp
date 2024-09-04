#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    int cube = num * num * num;
    cout << "Hence the cube number of " << num << " is " << cube << endl;
    return 0;
}