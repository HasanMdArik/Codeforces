#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int divisors(int64_t num)
{
    int result = 0;

    for (int i = 1; i <= sqrt(num); i++)
    {

        if (num % i == 0)
        {
            if ((num / i) == i)
            {
                result += 1;
            }
            else
            {
                result += 2;
            }
        }
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    int sumOfDivisors = 0;

    for (int a = 1; a <= num1; a++)
    {
        for (int b = 1; b <= num2; b++)
        {
            for (int c = 1; c <= num3; c++)
            {
                sumOfDivisors += divisors(a * b * c);
            }
        }
    }

    cout << sumOfDivisors << endl;

    return 0;
}
