#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    int num;
    cout << "Enter numbers (end with a letter): ";
    while (cin >> num)
    {
        numbers.push_back(num);
    }
    cin.clear();
    if (numbers.size() < 3)
    {
        cout << "Please enter at least three numbers. " << endl;
        return 1;
    }
    sort(numbers.begin(), numbers.end(), greater<int>());
    cout << "The three highest numbers are: ";
    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i] << (i < 2 ? ", " : "");
    }
    cout << endl;

    return 0;
}