#include <stdio.h>

int main() {
    int rows = 5; // The pattern goes up to 'E', which is 5 rows
    int i, j, space;

    for(i = 1; i <= rows; i++) {
        // Print leading spaces for pyramid alignment
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print ascending characters (e.g., A, AB, ABC)
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print descending characters (e.g., BA, CBA)
        for(j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
