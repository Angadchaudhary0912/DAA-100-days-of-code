/*Given an array of daily temperatures, find the length
 of the longest consecutive strictly increasing streak.*/

 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int current = 1;
    int longest = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1])
            current++;
        else
            current = 1;

        if (current > longest)
            longest = current;
    }

    printf("%d", longest);

    return 0;
}