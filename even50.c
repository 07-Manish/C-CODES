#include <stdio.h>

int main() {
    int i = 2;  // Start from the first even number
    printf("Even numbers between 1 to 50 :\n");
    // Using while loop to display even numbers from 1 to 50
    while (i <= 50) {
        printf("%d ", i);
        i += 2;  // Increment by 2 to get the next even number
    }

    printf("\n");  // To print a newline after all numbers are printed
    return 0;
}
