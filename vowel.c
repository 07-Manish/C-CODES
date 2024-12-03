#include <stdio.h>

int main() {
    char ch;

    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel using else-if ladder
    if (ch == 'a' || ch == 'A') {
        printf("%c is a vowel.\n", ch);
    }
    else if (ch == 'e' || ch == 'E') {
        printf("%c is a vowel.\n", ch);
    }
    else if (ch == 'i' || ch == 'I') {
        printf("%c is a vowel.\n", ch);
    }
    else if (ch == 'o' || ch == 'O') {
        printf("%c is a vowel.\n", ch);
    }
    else if (ch == 'u' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
    else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
