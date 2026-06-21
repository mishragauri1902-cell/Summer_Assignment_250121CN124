#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows for the pyramid

    // Outer loop controls the current row number
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop 1: Prints leading spaces to center-align the pyramid
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Inner loop 2: Prints the required odd number of stars (2*i - 1)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Moves the cursor to the next line after completing a row
        printf("\n");
    }

    return 0;
}
