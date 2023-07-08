#include <stdio.h>

int main() {
    // Calculate the sum of individual digits in a number
    // Example: 1234 = 1 + 2 + 3 + 4

    // Variable to store the sum
    int sum = 0;
    
    // Variable to store the input number
    int number;

    // Prompt the user to enter a number
    printf("Enter any number: ");
    scanf("%d", &number);
    
    // Calculate the sum of individual digits
    while (number > 0) {
        // Extract the last digit from the number
        int rem = number % 10;

        // Add the digit to the sum
        sum += rem;

        // Remove the last digit from the number
        number = number / 10;
    }
    
    // Print the sum of the digits
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}
