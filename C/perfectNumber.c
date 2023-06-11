#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    
    printf("Enter any number: ");
    scanf("%d", &number);
    
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    if (number == sum) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is not a Perfect Number.\n", number);
    }
    
    return 0;
}
