#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int arr1[m], arr2[n];

    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int i = 0, j = 0;
    int minDiff = abs(arr1[0] - arr2[0]);

    while (i < m && j < n) {
        int diff = abs(arr1[i] - arr2[j]);

        if (diff < minDiff)
            minDiff = diff;

        if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }

    printf("%d", minDiff);

    return 0;
}