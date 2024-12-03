#include <stdio.h>

int main() {
    int num;

    // Input: Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is greater than 8
    if (num > 8) {
        printf("The number is greater than 8.\n");
    } else {
        printf("The number is not greater than 8.\n");
    }

    return 0;
}
