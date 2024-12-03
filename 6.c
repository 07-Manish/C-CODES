#include <stdio.h>

int main() {
    int number;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is greater than 8
    if (number > 8) {
        printf("The number is greater than 8.\n");
    } else {
        printf("The number is not greater than 8.\n");
    }

    return 0;
}
