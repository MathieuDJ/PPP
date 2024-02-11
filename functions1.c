#include <stdio.h>

int gcd(int x, int y);
float av(float x);
float square(float x);

int gcd(int x, int y) {
        int smallest = (x < y) ? x : y;
        while (smallest != 0) {
            if (x % smallest == 0 && y % smallest == 0) {
                return smallest;
            }
            smallest -= 1;
        }
    }

float av(float x) {
    if (x < 0) {
        x = -x;
    } 
    return x;
}

float square(float x) {

    x = av(x);
    
    float guess = x / 2.0;

    
    for (int i = 0; i < 10; i++) {
        guess = 0.5 * (guess + x / guess);
    }

    return guess;
    
}

int main () {

    int number = gcd(240, 83);
    float number1 = av(-190938.6230);
    float number2 = square(16);

    printf("gcd: %d\n", number);
    printf("av: %0.2f\n", number1);
    printf("square: %0.2f\n", number2);


    int test0 = 30;
    int test1 = 15;
    int result = test0 % test1;
    printf("Result: %d", result);
    

    return 0;
}


