// Write a C++ program to find the first repeating element in an array of integers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[100], n, i;
    cout << "Enter nummber of elements: ";
    cin >> n;
    cout << "\nEnter elements: ";
    for (i = 0; i < n; i++)
        cin >> array[i];

    cout << "Original array: ";

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (array[i] == array[j])
            {
                cout << "\nFirst repeating integer is " << array[i];
                return 0;
            }

    cout << "No integer repeated\n";
    return 0;
}
