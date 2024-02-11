#include <stdio.h>

int main() {
    
    int hoursWorked = 0;
    int noOvertimeEarned = 0;
    float totalEarned = 0;
    float taxed = 0;

    printf("How many hours did you work this week?\n");
    scanf("%d", &hoursWorked);

    int overtimeEarned = hoursWorked - 40;

    if (hoursWorked <= 40) {
        totalEarned = hoursWorked * 12;
        printf("You earned: %0.2f gross\n", totalEarned);
    } else {
        noOvertimeEarned = 40 * 12;
        overtimeEarned = overtimeEarned * 18;
        totalEarned = noOvertimeEarned + overtimeEarned;
        printf("You earned: %0.2f gross\n", totalEarned);
    }

    if (totalEarned <= 300) {
            taxed = 0.15 * totalEarned;
            totalEarned -= taxed;
            printf("U earned: %0.2f net\n", totalEarned);
            printf("U got taxed for: %0.2f", taxed);
        } else if (300 < totalEarned && totalEarned <= 450) {
            taxed = 0.2 * (totalEarned - 300);
            totalEarned = totalEarned - taxed - 45;
            printf("U earned: %0.2f net\n", totalEarned);
            printf("U got taxed for: %0.2f", taxed + 45);
        } else {
            taxed = 0.25 * (totalEarned - 450);
            totalEarned = totalEarned - taxed - 75;
            printf("U earned %0.2f net\n", totalEarned);
            printf("U got taxed for: %0.2f", taxed + 75);
        }

    return 0;
}