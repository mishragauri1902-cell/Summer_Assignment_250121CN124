#include <stdio.h>
// Recursive function to find nth Fibonacci term
int fibonacci(int n) {
   if (n == 0)
       return 0;
   else if (n == 1)
       return 1;
   else
       return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
   int n;
   printf("Enter the term position (n): ");
   scanf("%d", &n);
   printf("The %dth term in Fibonacci series is: %d\n", n, fibonacci(n));
   return 0;
}
