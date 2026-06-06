#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary; // Store original for printing

    while (binary > 0) {
        rem = binary % 10;      // Extract the last digit (0 or 1)
        decimal += rem * base;  // Add digit * (2 ^ position)
        binary /= 10;           // Remove the last digit
        base *= 2;              // Increase power of 2 for next position
    }

    printf("Binary: %lld\nDecimal: %d\n", temp, decimal);

    return 0;
}
