#include <stdio.h>

int main() {
    // Check if a number is a perfect number
    // A perfect number is a number whose factors (excluding the number itself) sum up to the number itself

    int number, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (number == sum) {
        printf("It is a perfect number\n");
    } else {
        printf("It is not a perfect number\n");
    }

    return 0;
}
