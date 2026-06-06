
#include <stdio.h>

int main() {
    int n, i, a[32]; // Array to store up to 32-bit binary number

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Handle case for 0
    if (n == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Step 1 & 2: Repeatedly divide by 2 and store remainders
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }

    // Step 3: Print the remainders in reverse order
    printf("Binary equivalent: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
