#include <stdio.h>

int main() {
    int userInput = 0;
    double minutesInDay = 1440;
    double minutesInYear = minutesInDay * 365;

    printf("Enter a number of minutes: ");
    scanf("%d",&userInput);

    double amountDays = 0.0;
    double amountYears = 0.0;

    amountDays = (double)userInput / (double)minutesInDay;
    amountYears = (double)userInput / (double)minutesInYear;

    printf("The entered number of minutes is %.2f days.\n", amountDays);
    printf("The entered number of minutes is %.2f years.\n", amountYears);

    return 0;
}
