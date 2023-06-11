#include <stdio.h>

int main() {
    int cube, number;
    char ch;

    do {
        printf("Enter any number: ");
        scanf("%d", &number);

        cube = number * number * number;

        printf("Cube: %d\n", cube);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
