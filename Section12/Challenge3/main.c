#include <stdio.h>

void square(int* num);

int main() {
    int number = 4;
    square(&number);
    printf("%d\n", number);
    return 0;
}

void square(int* num){
    *num = ((*num) * (*num));
}
