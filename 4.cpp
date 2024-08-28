#include <iostream>

// Function to sum all digits of a number
int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to sum all digits in a range of numbers
int sumAllDigitsInRange(int start, int end)
{
    int totalSum = 0;
    for (int i = start; i <= end; i++)
    {
        totalSum += sumDigits(i);
    }
    return totalSum;
}

int main()
{
    int start, end;

    // Prompt user to input the start and end of the range
    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    // Calculate and display the sum of all digits in the range
    std::cout << "The sum of all digits between " << start << " and " << end << " is: "
              << sumAllDigitsInRange(start, end) << std::endl;

    return 0;
}
