#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows to print
    char ch = 'A'; // Start with character 'A'

    // Outer loop controls the number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop prints the character 'i' times
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        
        ch++;         // Move to the next alphabet character
        printf("\n"); // Move to the next line
    }

    return 0;
}
