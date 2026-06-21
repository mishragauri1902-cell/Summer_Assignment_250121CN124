#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask user for the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the rows (counts down from max rows to 1)
    for (i = rows; i >= 1; i--) {
        
        // Inner loop prints the stars for each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}
