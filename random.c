#include <stdio.h>

float multiply(float a, float b);
float divide(float a, float b);
float add(float a, float b);
float subtract(float a, float b);

float multiply(float a, float b) {
    float result = a * b;
    return result;
}

float divide(float a, float b) {
    float result = a / b;
    return result;
}

float add(float a, float b) {
    float result = a + b;
    return result;
}

float subtract(float a, float b) {
    float result = a - b;
    return result;
}

int main() {

    float numOne, numTwo;
    char operator;
    printf("Hello and welcome to my calculator!\n");
    printf("Please enter your calculation below (+ - * /)\n");
    printf("->");
    scanf("%f%c%f",&numOne,&operator,&numTwo);
    
    switch (operator) {
        case '*': {
            float result = multiply(numOne, numTwo);
            printf("%0.2f\n", result);
            break;
        }  
        case '/': {
            float result = divide(numOne, numTwo);
            printf("%0.2f\n", result);
            break;
        }  
        case '+': {
            float result = add(numOne, numTwo);
            printf("%0.2f\n", result);
            break;
        }  
        case '-': {
            float result = subtract(numOne, numTwo);
            printf("%0.2f\n", result);
            break;
        }   
    }

    

    return 0;
}