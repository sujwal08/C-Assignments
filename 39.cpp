// Array
// Write a C++ program to find the largest three elements in an array
#include <bits/stdc++.h>
using namespace std;

// Function to print three largest elements
void printThreeLargest(int arr[], int arr_size)
{
    int first, second, third;

    third = first = second = INT_MIN;
    for (int i = 0; i < arr_size; i++)
    {

        // If current element is greater than first
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    cout << "Largest three distinct numbers are: " << first << " " << second << " " << third << endl;
}

// Driver code
int main()
{
    int arr1[] = {30, 20, 10, 40, 100, 80};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printThreeLargest(arr1, n1);

    int arr2[] = {30, 20, 10, 40, 100, 80, 80, 100, 110};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printThreeLargest(arr2, n2);
    return 0;
}