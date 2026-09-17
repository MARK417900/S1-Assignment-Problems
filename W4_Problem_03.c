//Count digits in a number

#include <stdio.h>
int main() {
    long n;
    int count = 0;
    printf("Enter any number: ");
    scanf("%ld", &n);
    if (n == 0) count = 1;
    long temp = n < 0 ? -n : n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("Number of digits = %d\n", count);
    return 0;
}

//This program only counts digits before the decimal point.