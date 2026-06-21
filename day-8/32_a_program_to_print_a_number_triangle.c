#include <stdio.h>

int main() {
    int rows = 5; // You can change this to any number you like

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print numbers from 1 up to the current row number 'i'
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
