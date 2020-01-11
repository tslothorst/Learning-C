#include <stdio.h>

int main() {

    int number = 27;
    int* numptr = &number;

    printf("The address of the pointer is: %p\n", &numptr);
    printf("The value of the pointer is: %p\n", numptr);
    printf("The value of what the pointer is pointing to: %d\n",*numptr);

    return 0;
}
