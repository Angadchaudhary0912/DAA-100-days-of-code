/*Input a number from the user and print
a. Number of 1 and number of 0 in its binary representation.
b. Number of consecutive 1 in the binary representation.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ones = 0, zeros = 0;
    int current = 0, max = 0;

    while (n > 0) {
        if (n & 1) {
            ones++;
            current++;

            if (current > max)
                max = current;
        } else {
            zeros++;
            current = 0;
        }

        n = n >> 1;
    }

    printf("Number of 1: %d\n", ones);
    printf("Number of 0: %d\n", zeros);
    printf("Consecutive 1: %d\n", max);

    return 0;
}