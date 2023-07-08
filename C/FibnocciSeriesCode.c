#include <stdio.h>

int main() {
    // Fibonacci code
    // Generates the Fibonacci series up to a specified limit
    
    int a = 0, b = 1, c;
    int number;
    
    // Prompt the user to enter the limit
    printf("Enter the limit: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++) {
        // Print the current Fibonacci number (a)
        printf("%d\n", a);
        
        // Calculate the next Fibonacci number
        c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}
