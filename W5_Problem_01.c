//Print prime numbers from 1 to 50

#include <stdio.h>
int main() {
    printf("Prime numbers from 1 to 50:\n");
    for (int n = 2; n <= 50; n++) {
        int isPrime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d\n", n);
    }
    printf("\n");
    return 0;
}