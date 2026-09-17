//Find area of a rectangle

#include <stdio.h>
int main() {
    int length, width;
    printf("Enter length of Rectangle: ");
    scanf("%d", &length);
    printf("Enter width of Rectangle: ");
    scanf("%d", &width);
    int Area=length * width;
    printf("Area of rectangle = %d\n",Area);
    return 0;
}