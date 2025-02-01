#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character between A and J: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'J')||(ch >= 'a' && ch <= '') {
        printf("Next 6 characters: ");
        for (int i = 1; i <= 6; i++) {
            printf("%c ", ch + i);
        }
        printf("\n");
    } else {
        printf("Invalid input! Please enter a character between A and J.\n");
    }

    return 0;
}
