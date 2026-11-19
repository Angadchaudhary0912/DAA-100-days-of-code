
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcabcbb";
    int n = strlen(str);

    int start = 0, maxLength = 0;
    int bestStart = 0;

    for (int i = 0; i < n; i++) {
        for (int j = start; j < i; j++) {
            if (str[j] == str[i]) {
                start = j + 1;
                break;
            }
        }

        if (i - start + 1 > maxLength) {
            maxLength = i - start + 1;
            bestStart = start;
        }
    }

    printf("Longest substring: ");

    for (int i = bestStart; i < bestStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d", maxLength);

    return 0;
}
