#include <stdio.h>

// Function declaration / prototype
int findMax(int num1, int num2);

int main() {
    int a, b, max;

    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Call the function and store the result
    max = findMax(a, b);

    // Print the final result
    printf("The maximum number is: %d\n", max);

    return 0;
}

/**
 * Function to find the maximum between two integers.
 * @param num1 First integer
 * @param num2 Second integer
 * @return The greater value between num1 and num2
 */
int findMax(int num1, int num2) {
    // Uses ternary operator: if num1 > num2, return num1, else return num2
    return (num1 > num2) ? num1 : num2;
}
