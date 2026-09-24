//Factorial using function
#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter any natural number :");
    scanf("%d",&n);
    if(n==0){
        printf("The factorial of 0 is 1");
    }
     else{
        for(i=1; i<=n; i++){
            fact=i*fact;
        }
        printf("The factorial of %d is%d",n,fact);
     }
return 0;
}

// Method 2 (Using Functions)
#include <stdio.h>
long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, factorial(n));
    return 0;
}