#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m], b[n], c[m + n];

    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    int total = m + n;

    if (total % 2 == 1)
        printf("%.1f", (double)c[total / 2]);
    else
        printf("%.1f", (c[total / 2 - 1] + c[total / 2]) / 2.0);

    return 0;
}