#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;
    cout << "Input any number: ";
    cin >> num;

    lastDigit = num % 10;

    digits = (int)log10(num);

    firstDigit = (int)(num / pow(10, digits));

    // Swapping first and last digits
    swappedNum = lastDigit;
    swappedNum *= (int)pow(10, digits);
    swappedNum += num % ((int)pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    cout << "The number after swapping the first and last digits are: " << swappedNum << endl;
    return 0;
}
