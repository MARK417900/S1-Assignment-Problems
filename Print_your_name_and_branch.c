#include <stdio.h>
int main() {
    char name[50], branch[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your branch: ");
    scanf("%s", branch);
    printf("Name: %s\nBranch: %s\n", name, branch);
    return 0;
}
