#include <stdio.h>

int main() {
    double height= 2.0;
    double width= 2.0;
    printf("Calculate the area and perimeter of a rectangle.\n");
    printf("Please enter the height of the rectangle: ");
    scanf("%lf",&height);
    printf("Please enter the height of the rectangle: ");
    scanf("%lf",&width);
    printf("Entered height: %.4f \n", height);
    printf("Entered width: %.4f \n", width);

    double area = 0.0;
    double perimeter = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("The area of the rectangle is: %.4f \n", area);
    printf("The perimeter of the rectangle is: %.4f \n", perimeter);
    printf("Goodbye!\n");

    return 0;
}
