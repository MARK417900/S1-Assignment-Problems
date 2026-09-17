//Sum of first N natural numbers using loop

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter any Natural Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}