#include <stdio.h>

int main() {
    int hoursWorked = 0;
    int overtime = 40;
    double hourlywage = 12;
    double overtimeFactor = 1.5;
    double taxesOwed = 0;
    double taxRate1 = 0.15;
    double taxRate2 = 0.20;
    double taxRate3 = 0.25;
    double netPay = 0;

    double basepay = 0;

    printf("Enter amount of hours worked this week: ");
    scanf("%d",&hoursWorked);

    if(hoursWorked <= overtime)
    {
        basepay= (double)hoursWorked * hourlywage;
    }

    if(hoursWorked > overtime)
    {
        basepay = (double)hourlywage * (double)overtime;
        basepay += (((double)hoursWorked - (double)overtime) * (hourlywage * overtimeFactor));
    }

    if(basepay < 300)
    {
        taxesOwed = basepay * taxRate1;
    }

    if(basepay >300 && basepay <= 450)
    {
        taxesOwed = 300 * taxRate1;
        taxesOwed += (basepay - 300) * taxRate2;
    }

    if(basepay > 450)
    {
        taxesOwed = 300 * taxRate1;
        taxesOwed += 150 * taxRate2;
        taxesOwed += (basepay - 450) * taxRate3;
    }

    netPay = basepay - taxesOwed;

    printf("Your gross pay this week is: %.2f \n", basepay);
    printf("You owe %.2f in taxes \n", taxesOwed);
    printf("Your net pay this week is: %.2f \n", netPay);

    return 0;
}
