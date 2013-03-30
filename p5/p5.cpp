/**
 * 2520 is the smallest number that can be divided by each of the numbers from 1
 * to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 */

#include <iostream>

using namespace std;

int main(void)
{
    int i, aux, num = 0;

    for (aux = 2520; num == 0; aux++)
    {
        for (i = 5; i <= 20; i++)
        {
            if (aux%i) {
                num = 0;
                break;
            } else {
                num = aux;
            }
        }
    }

    cout << num << endl;
}
