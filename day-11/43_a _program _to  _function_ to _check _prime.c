#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
// Returns true if prime, false otherwise
bool isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) {
        return false;
    }

    // Check divisibility from 2 up to the square root of n
    // i * i <= n is a clean alternative to using the sqrt() function
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a factor, so it is not prime
        }
    }

    return true; // No factors found, it is prime
}

int main() {
    int num;

    // Ask user for input
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Call the function and print the result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }

    return 0;
}
