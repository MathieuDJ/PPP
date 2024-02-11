#include <stdio.h>
#include <stdlib.h>
#include "orcs.h"

int main() {

    // Part 1: String manipulation using the "munch" function

    // Declare a character array to store the sentence
    char sentence[100];

    // Prompt the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    // Remove the newline character from the input
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
    }

    // Display the input sentence
    printf("INPUT: %s\n", sentence);

    // Call the "munch" function and display the output
    printf("OUTPUT: %s\n", munch(sentence));

    // Part 2: Orc army generation and battle simulation

    // Declare a variable to store the number of orcs
    int amount;

    // Prompt the user to enter the number of orcs
    printf("How many orcs do you want?: ");
    scanf("%d", &amount);

    // Display the input amount
    printf("INPUT: %d\n", amount);

    // Generate an array of orcs using the "generate_orcs" function
    struct Orcs* orc_army = generate_orcs(amount);

    // Display the orc army details
    printf("OUTPUT: \n");

    for (int i = 0; i < amount; i++) {
        printf("Orc %d: attack %d, life %d.\n", i + 1, orc_army[i].attack, orc_army[i].life);
    }

    // Simulate orc battles and determine the last orc standing
    int current_winner = 0;
    for (int i = 0; i < amount - 1; i++) {
        printf("Battle %d: Orc %d vs Orc %d\n", i + 1, current_winner + 1, i + 2);

        // Simulate the battle using the "fight" function
        fight(orc_army[current_winner], orc_army[i + 1]);

        // Determine the winner and update the current winner
        struct Orcs attacker = orc_army[current_winner];
        struct Orcs defender = orc_army[i + 1];

        if (defender.life - attacker.attack <= 0) {
            printf("Winner: Orc %d\n", current_winner + 1);
        } else {
            printf("Winner: Orc %d\n", i + 2);
            current_winner = i + 1;
        }
    }

    // Display the last orc standing
    printf("Last man standing: Orc %d\n", current_winner + 1);

    // Free the allocated memory for the orc army
    free(orc_army);

    return 0;
}
