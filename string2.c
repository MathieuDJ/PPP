#include <stdio.h>
#include <string.h>

void reverseString(char result[], const char str[]);

void reverseString(char result[], const char str[]) {
    int len = strlen(str);
    int i;

    for (i = 0; i < len; i++) {
        result[i] = str[len - 1 - i]; 
    }

    result[i] = '\0';
    
}

int main() {

    char test[100];
    char str[100];
    printf("Enter a string to be reversed: \n");
    scanf("%s", str);
    reverseString(test, str);
    printf("The string: %s\n", test);

    


    return 0;
}