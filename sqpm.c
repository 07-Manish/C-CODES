#include <stdio.h>

int main() {
    float side_length, perimeter;

    // Ask the user to enter the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%f", &side_length);

    // Calculate the perimeter of the square
    perimeter = 4 * side_length;

    // Output the result
    printf("The perimeter of the square is: %.2f\n", perimeter);

    return 0;
}
