// Write a C++ program to count the number of occurrences of a given number in a
// sorted array of integers.
#include <iostream>
using namespace std;
int countOccourances(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, x;
    cout << "Enter the number of elements in the array: ";
    int arr[n];

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to count occurrences of: ";
    cin >> x;

    int count = countOccourances(arr, n, x);

    cout << "The number " << x << " occurs " << count << " time(s) in the array." << endl;

    return 0;
}
