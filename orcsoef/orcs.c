#include "orcs.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Function to generate an array of orcs with random attack and life values
struct Orcs* generate_orcs(int amount) {
    // Allocate memory for the orc army
    struct Orcs* army = malloc(sizeof(struct Orcs) * amount);

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Populate the orc army with random attack and life values
    for (int i = 0; i < amount; i++) {
        army[i].attack = rand() % 10 + 1;
        army[i].life = rand() % 10 + 1;
    }

    return army;
}

// Function to simulate a battle between two orcs
struct Orcs fight(struct Orcs attacker, struct Orcs defender) {
    // Reduce the defender's life based on the attacker's attack value
    defender.life -= attacker.attack;

    // Check if the defender is defeated
    if (defender.life <= 0) {
        defender.life = 0;
        printf("Defender is defeated!\n");
        return attacker;
    } else {
        printf("Defender survives the attack!\n");
        return defender;
    }
}

// Function to replace vowels in a sentence with 'X'
char* munch(char* sentence) {
    // Allocate memory for the response string
    char* response = malloc(sizeof(char) * 100);
    int j = 0;

    // Iterate through the characters in the input sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        // Check if the character is a vowel and replace with 'X'
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' ||
            sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
            response[j] = 'X';
        } else {
            response[j] = sentence[i];
        }
        j++;
    }

    response[j] = '\0';  // Null-terminate the response string
    return response;
}
