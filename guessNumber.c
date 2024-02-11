#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    
    int userGuess = 0;
    int userTries = 5;
    time_t t; //time variable

    srand((unsigned)time(&t)); //initialize random number generator
    int randomNumber = rand() % 21; //generate random number between 0 and 20 (inclusive)
    printf("The random number is %d\n", randomNumber); 
    printf("\n");
    printf("Enter your guess (0-20):\n");
    printf("You have %d tries left.\n", userTries);
    scanf("%d", &userGuess);
    printf("\n");

    while (userGuess < 0 || userGuess > 20) {
        printf("Please enter a valid number:\n");
        scanf("%d", &userGuess);
        printf("\n");
    }
    
    while (userGuess != randomNumber && userTries != 1) {
        userTries -= 1;
        if (userGuess > randomNumber) {
            printf("You guessed too high, try again:\n");
        } else {
            printf("You guessed too low, try again:\n");
        }
        printf("You have %d tries left.\n", userTries);
        scanf("%d", &userGuess);
        printf("\n");

        while (userGuess < 0 || userGuess > 20) {
        printf("Please enter a valid number:\n");
        scanf("%d", &userGuess);
        printf("\n");
    }
    }

    if (userTries == 1) {
        printf("You used all your tries!");
    } else {
        printf("You guessed correct!");
    }
    
    return 0;
}

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    
    int userGuess = 0;
    int userTries = 5;
    time_t t; //time variable

    srand((unsigned)time(&t)); //initialize random number generator
    int randomNumber = rand() % 21; //generate random number between 0 and 20 (inclusive)
    printf("The random number is %d\n", randomNumber); 
    printf("\n");

    while (userTries > 0) {
        printf("Enter your guess (0-20):\n");
        printf("You have %d tries left.\n", userTries);
        scanf("%d", &userGuess);
        printf("\n");

        if (userGuess < 0 || userGuess > 20) {
            printf("Please enter a valid number:\n");
            continue;
        }

        if (userGuess == randomNumber) {
            printf("You guessed correct!\n");
            break;
        } else {
            userTries--;
            printf("You guessed too %s, try again:\n", userGuess > randomNumber ? "high" : "low");
        }
    }

    if (userTries == 0) {
        printf("You used all your tries!\n");
    }

    return 0;
}

*/