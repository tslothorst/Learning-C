// Copied from course source code. Bad assignment, you will spend more time on primality tests then on arrays.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int p;
    int i;

    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime;

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0;  i < primeIndex;  ++i )
        printf ("%i  ", primes[i]);

    printf("\n");
    return 0;
}