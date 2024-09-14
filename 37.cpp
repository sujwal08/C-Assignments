// write a user defined function in c++ that evaluates or returns the simple interest by providing princple time and rate
// you can also use default arguments for the rate
#include <iostream>
using namespace std;
double simpleInterest(int p, float t, float r = 9)
{
    return (p * t * r) / 100;
}

int main()
{
    int principal;
    float time, rate;
    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter time: ";
    cin >> time;

    cout << "Simple Interest is: " << simpleInterest(principal, time) << endl;
    return 0;
}