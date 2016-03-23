/**
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
 * that the 6th prime is 13.
 *
 * What is the 10 001st prime number?
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define MAX_PRIME 10001

int is_prime(int n);

int main(void)
{
    vector<int> primes;

    primes.push_back(1);
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    primes.push_back(13);

    for (int i = 17; primes.size() <= MAX_PRIME; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }

    cout << primes[MAX_PRIME] << endl;
}

int is_prime(int n)
{
    for (int i = 3; i < sqrt(n) + 1; i++) {
        if (!(n%i)) {
            return 0;
        }
    }

    return 1;
}
