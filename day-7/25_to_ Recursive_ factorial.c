#include <stdio.h>
// Recursive function to calculate factorial
long int factorial(int n) {
   if (n <= 1) // Base case: factorial of 0 or 1 is 1
       return 1;
   else
       return n * factorial(n - 1); // Recursive call
}
int main() {
   int num;
   printf("Enter a positive integer: ");
   scanf("%d", &num);
   if (num < 0) {
       printf("Factorial of a negative number doesn't exist.\n");
   } else {
       printf("Factorial of %d = %ld\n", num, factorial(num));
   }
   return 0;
}
