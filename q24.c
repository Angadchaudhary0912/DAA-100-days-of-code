
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int low = 0, high = n - 1;

    while(low < high) {
        int mid = low + (high - low) / 2;

        if(nums[mid] > nums[mid + 1]) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }

    printf("Peak element: %d", low);

    return 0;
}
