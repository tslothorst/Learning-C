#include <stdio.h>

int main() {
    printf("The size of an int in bytes: %zd \n", sizeof(int));
    printf("The size of a char in bytes: %zd \n", sizeof(char));
    printf("The size of a long in bytes: %zd \n", sizeof(long));
    printf("The size of a long long in bytes: %zd \n", sizeof(long long));
    printf("The size of a double in bytes: %zd \n", sizeof(double));
    printf("The size of a long double in bytes: %zd \n", sizeof(long double));
    return 0;
}
