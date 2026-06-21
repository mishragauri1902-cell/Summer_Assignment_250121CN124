#include <stdio.h>

// Function definition
int findSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int number1 = 15;
    int number2 = 25;
    
    // Function call
    int result = findSum(number1, number2);
    
    printf("The sum of %d and %d is: %d\n", number1, number2, result);
    return 0;
}
