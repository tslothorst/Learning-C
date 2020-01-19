#include <stdio.h>
#include <string.h>

struct employee {
    char name[80];
    char hireDate[15];
    float salary;
};

int main() {
    struct employee Picard;
    strcpy(Picard.name,"Jean Luc Picard");
    strcpy(Picard.hireDate,"01-01-2400");
    Picard.salary = 4500.0;

    printf("%s\n",Picard.name);
    printf("%s\n",Picard.hireDate);
    printf("%.2f\n",Picard.salary);
    return 0;
}
