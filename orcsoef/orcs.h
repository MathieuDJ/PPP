#ifndef ORCS_H
#define ORCS_H

// Define the Orcs structure with attack and life attributes
struct Orcs {
    int attack;
    int life;
};

// Function declarations

// Function to generate an array of orcs with random attack and life values
struct Orcs* generate_orcs(int amount);

// Function to simulate a battle between two orcs
struct Orcs fight(struct Orcs attacker, struct Orcs defender);

// Function to replace vowels in a sentence with 'X'
char* munch(char* sentence);

#endif  // ORCS_H
