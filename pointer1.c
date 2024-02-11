#include <stdio.h>

int main() {

    int number = 0;
    int *pnumber = NULL;

    number = 52;

    pnumber = &number;

    //number = 51;

    printf("Adres van number: %p\n", &number);
    printf("Waarde van number: %d\n", number);

    printf("Adres van pointer pnumber: %p\n", (void*)&pnumber);
    printf("Waarde van pointer: %p\n", pnumber);
    printf("Waarde waar pointer naar verwijst: %d\n", *pnumber);

    return 0;
}