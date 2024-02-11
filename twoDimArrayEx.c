#include <stdio.h>

int main () {
    
    float rainfall[5][12] = {
                                {12, 13, 11, 8, 5, 49.9, 20.1, 3, 3, 19, 9.9, 10},
                                {13, 12, 11, 8, 5, 49.9, 40.1, 9, 3, 19, 8, 30.9},
                                {12, 13, 11, 8, 5, 39.9, 40.1, 3, 3, 19, 10.9, 50},
                                {12, 10, 11, 8, 5, 19.9, 20.1, 1, 3, 29, 9.9, 10},
                                {12, 13, 61, 8, 5, 59.9, 20.1, 3, 3, 39, 9.9, 20}
                            }; 
    
    int i, j;
    
    for (i = 0; i < 5; i++) {
        float yearlyTotal = 0;
        float yearlyAverage = 0;
        for (j = 0; j < 12; j++) {
            yearlyTotal += rainfall[i][j];
            yearlyAverage += rainfall[i][j];
        }
        yearlyAverage /= 12;
        printf("Yearly total for 201%d was: %0.2f\n",i, yearlyTotal);
        printf("Yearly average for 201%d was: %0.2f\n",i, yearlyAverage);
        printf("\n");
    }

    float monthlyAverage = 0;
    char months[][12] = {"Jan", "Feb", "Maa", "Apr", "Mei", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dec"};
    for (j = 0; j < 12; j++) {
        for (i = 0; i < 5; i++) {
        monthlyAverage += rainfall[i][j];
        }
        printf("Average of %s: %0.2f\n",months[j], monthlyAverage / 5);
        monthlyAverage = 0;
    }
    


    return 0;
}