// Fibonacci series (first 10 terms)

#include <stdio.h>
int main() {
    int n = 10, a = 0, b = 1, next;
    printf("First 10 Fibonacci terms:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}