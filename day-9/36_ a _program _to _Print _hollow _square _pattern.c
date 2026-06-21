#include <stdio.h>

int main() {
    int i, j, size;

    // Get the size of the square from the user
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    // Outer loop iterates through each row
    for(i = 1; i <= size; i++) {
        // Inner loop iterates through each column
        for(j = 1; j <= size; j++) {
            // Print star if it's the first or last row, or first or last column
            if(i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" "); // Print space for the hollow interior
            }
        }
        printf("\n");
    }

    return 0;
}
