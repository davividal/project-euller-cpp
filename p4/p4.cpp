/*
 * A palindromic number reads the same both ways. The largest palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 **/

#include <iostream>

using namespace std;

int is_palindromic(int number);

int main(void)
{
    int x, y, z, greatest = 0;

    x = y = 999;

    for (; x > 100; x--)
    {
        if (x*x < greatest) {
            break;
        }
        for (y = 999; y > 100; y--)
        {
            z = x * y;

            if (is_palindromic(z) && z > greatest) {
                greatest = z;
                break;
            }
        }
    }

    cout << greatest;
}

int is_palindromic(int original)
{
    int digit, number, rev = 0;

    number = original;

    do
    {
        digit = number % 10;
        rev = (rev * 10) + digit;
        number = number / 10;
    } while (number != 0);

    if (rev == original) {
        return 1;
    } else {
        return 0;
    }
}
