// Write a program in C++ to find the perfect numbers between 1 and 500.
#include <iostream>

// Function to check if a number is perfect
bool isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}

int main()
{
    std::cout << "Perfect numbers between 1 and 500 are:" << std::endl;

    for (int i = 1; i <= 500; i++)
    {
        if (isPerfect(i))
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
