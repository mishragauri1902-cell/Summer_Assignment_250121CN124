#include <stdio.h>

/**
 * Function to calculate x^n without pow()
 * base: the number to be raised
 * exp: the exponent (power)
 */
double power(double base, int exp) {
    double result = 1.0;
    int positiveExp = (exp < 0) ? -exp : exp; // Handle negative exponents

    // Multiply base 'positiveExp' times
    for (int i = 0; i < positiveExp; i++) {
        result *= base;
    }

    // If original exponent was negative, return the reciprocal
    return (exp < 0) ? (1.0 / result) : result;
}

int main() {
    double x;
    int n;

    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    double res = power(x, n);
    printf("%.2lf raised to the power of %d is %.2lf\n", x, n, res);

    return 0;
}
