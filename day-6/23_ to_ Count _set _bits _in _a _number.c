 #include <stdio.h>

/**
 * Counts the number of set bits (1s) in an integer using Brian Kernighan's Algorithm.
 * This method is efficient as it only loops as many times as there are set bits.
 */
int countSetBits(unsigned int n) {
    int count = 0;
    while (n > 0) {
        // This bitwise operation clears the rightmost set bit
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("Number of set bits in %u: %d\n", num, countSetBits(num));
    
    return 0;
}
