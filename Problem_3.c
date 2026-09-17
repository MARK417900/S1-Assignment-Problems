//Find area of a rectangle

#include <stdio.h>
int main() {
    float length, width;
    printf("Enter length of Rectangle: ");
    scanf("%f", &length);
    printf("Enter width of Rectangle: ");
    scanf("%f", &width);
    float Area=length * width;
    printf("Area of rectangle = %.2f\n",Area);
    return 0;
}