#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to handle the number of rows
    for (i = 0; i < rows; i++) {
        
        // Inner loop 1: Prints leading spaces for alignment
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Inner loop 2: Prints the stars
        // Formula 2 * (rows - i) - 1 calculates the odd number of stars per row
        for (j = 0; j < 2 * (rows - i) - 1; j++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
