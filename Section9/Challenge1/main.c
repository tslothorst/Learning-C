#include <stdio.h>

int gcd (int a, int b);
float absoluteValue(float a);
float squareroot(int a);

int main() {
    int num1 = gcd(8,12); // outcome should be 4.
    float num2 = absoluteValue(-3); // outcome should be 3.
    float num3 = squareroot(16); // outcome should be 4;

    float num4 = squareroot(-16); // outcome should be -1;
    int num5 = gcd(-8,12); // outcome should be -1;

    printf("The g.c.d. of 8 and 12 is: %d\n", num1);
    printf("The absolute value of -3 is: %.2f\n", num2);
    printf("The square root of 16 is: %.2f\n", num3);
    printf("====================================================\n");
    printf("Testing for expected errors:\n");
    printf("The square root of 16 is: %.2f\n", num4);
    printf("The g.c.d. of 8 and 12 is: %d\n", num5);
    return 0;
}

int gcd(int a, int b) {
    int gcd = 0;
    if( a <= 0 || b <= 0){
        return -1;
    }
    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    gcd = a;
    return gcd;
}

float absoluteValue(float a)
{
    return ((a<0)?-a:a);
}

float squareroot(int a)
{
    if(a<0){
        return -1;
    }
    // store the half of the given number e.g from 256 => 128
    float sqrt = a / 2;
    float temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp) {
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = (a / temp + temp) / 2;
    }
    return sqrt;

}