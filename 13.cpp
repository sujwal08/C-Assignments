#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    // Function to count prime numbers less than 'n'
    int count_Primes(int n)
    {
        int ctr = 0;
        for (int i = 2; i < n; i++)
        {
            if (is_Prime(i))
            {
                ctr++;
            }
        }
        return ctr;
    }

    bool is_Prime(int n)
    {
        int n_ = int(sqrt(n));
        for (int i = 2; i <= n_; i++)
        {
            if (0 == n % i)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution *solution = new Solution();
    int n = 8;

    cout << "Number of prime numbers less than " << n << " is " << solution->count_Primes(5) << endl;
    n = 30;
    cout << "Number of prime numbers less than " << n << " is " << solution->count_Primes(30) << endl;
    n = 100;
    cout << "Number of prime numbers less than " << n << " is " << solution->count_Primes(100) << endl;
    return 0;
}
