#include <stdio.h>

int main() {
    int fact = 1, number;
     
    printf("Enter any number: ");
    scanf("%d", &number);
     
    for (int i = 1; i <= number; i++) {
        fact *= i;
    }
     
    printf("Factorial of %d is: %d\n", number, fact);
    return 0;
}
