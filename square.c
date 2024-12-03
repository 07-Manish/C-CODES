#include <stdio.h>

int main() {
    float side_length, area;

    // Ask the user to enter the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%f", &side_length);

    // Calculate the area of the square
    area = side_length * side_length;

    // Output the result
    printf("The area of the square is: %.2f\n", area);

    return 0;
}
