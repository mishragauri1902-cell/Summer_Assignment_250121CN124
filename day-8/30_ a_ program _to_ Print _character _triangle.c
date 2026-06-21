#include <stdio.h>

int main() {
    int rows = 5; 
    for (int i = 1; i <= rows; i++) {
        char ch = 'A'; // Reset to 'A' at the start of each row
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}
