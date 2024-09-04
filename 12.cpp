#include <iostream>

using namespace std;

// Function to find the square root of a number using binary search
int square_root(int num1)
{
    long left_part = 0;
    long right_part = num1 / 2 + 1;

    // Implementing binary search to find the square root
    while (left_part <= right_part)
    {
        long mid = left_part + (right_part - left_part) / 2;
        long result = mid * mid;
        // Checking conditions to adjust the boundaries and find the square root
        if (result == (long)num1)
        {
            return (int)mid;
        }
        else if (result > num1)
        {
            right_part = mid - 1;
        }
        else
        {
            left_part = mid + 1;
        }
    }
    return (int)right_part;
}

// Main function to test the square_root function
int main()
{
    int n = 81;
    cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
    n = 8;
    cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
    cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
    n = 225;
    cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
    return 0;
}
