#include <stdio.h>

int main() {
    int primeNumbers[100] = {0};
    int index = 2;

    primeNumbers[0] = 2;
    primeNumbers[1] = 3;

    for (int i = 4; i <= 100; i++) {
        int isPrime = 1; // Assume i is prime

        for (int y = 2; y * y <= i && isPrime; y++) {
            if (i % y == 0) {
                isPrime = 0; // i is not prime
            }
        }

        if (isPrime) {
            primeNumbers[index++] = i;
        }
    }

    // Print the prime numbers
    printf("Prime numbers between 3 and 100 are:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", primeNumbers[i]);
    }

    return 0;
}
