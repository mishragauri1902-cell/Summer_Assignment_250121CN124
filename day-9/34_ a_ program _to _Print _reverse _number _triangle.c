#include <stdio.h>

int main() {
    int rows = 5; // Number of rows to print

    // Outer loop for the number of rows
    for (int i = rows; i >= 1; i--) {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
