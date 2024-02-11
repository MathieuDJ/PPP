#include <stdio.h>
#include <stdbool.h>

int numberOfCharacters(char str[]);
void concatenate(char result[], const char str1[], const char str2[]);
bool compareString(const char str1[], const char str2[]);

int numberOfCharacters(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        ++count;
    }
    return count;
    
}

void concatenate(char result[], const char str1[], const char str2[]) {
    int count = 0;
    int count1 = 0;
    while (str1[count] != '\0') {
        result[count] = str1[count];
        ++count; 
    }
    
    while (str2[count1] != '\0') {
        result[count + count1] = str2[count1];
        ++count1;
    }
    result[count + count1] = '\0';
}

bool compareString(const char str1[], const char str2[]) {
    bool isTrue = true;
    int count = 0;

    while (str1[count] != '\0' && str2[count] != '\0') {
        if (str1[count] != str2[count]) {
            isTrue = false;
        }
        ++count;
    }

    if (str1[count] != '\0' || str2[count] != '\0') {
        return false;
    }


    return isTrue;

}

int main () {


    char result[] = "Helloo!";
    int result1 = numberOfCharacters("Hell");
    printf("%d\n", numberOfCharacters(result));
    printf("%d\n", numberOfCharacters("Hello!"));
    printf("%d\n", result1);

    char test[100];
    char stringOne[] = "Helloo";
    char stringTwo[] = "Worldrr";

    concatenate(test, stringOne, stringTwo);

    printf("%s\n", test);

    char stringTestOne[] = "Amooo";
    char stringTestTwo[] = "Amooot";
    bool result2 = compareString(stringTestOne, stringTestTwo);
    printf("%d", result2);

    


    

    return 0;
}