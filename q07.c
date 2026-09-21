#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (mid % 2 == 1)
            mid--;

        if (nums[mid] == nums[mid + 1])
            low = mid + 2;
        else
            high = mid;
    }

    printf("%d", nums[low]);

    return 0;
}