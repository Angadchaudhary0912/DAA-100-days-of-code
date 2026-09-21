#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], result[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int left = 0;
    int right = n - 1;

    for (int i = n - 1; i >= 0; i--) {
        int leftSquare = a[left] * a[left];
        int rightSquare = a[right] * a[right];

        if (leftSquare > rightSquare) {
            result[i] = leftSquare;
            left++;
        } else {
            result[i] = rightSquare;
            right--;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}