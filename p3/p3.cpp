/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143
 */
#include <iostream>

 using namespace std;

 int main(void)
 {
    int i = 2, factor = 0;
    unsigned long int number = 600851475143;

    for (; i <= number; i++)
    {
        if (!(number%i)) {
            factor = i;
            number /= i;
        }
    }

    cout << factor << endl;
 }
