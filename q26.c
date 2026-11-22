
#include <stdio.h>

int main() {
    int n, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements (0, 1, 2): ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int low = 0, mid = 0, high = n - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;

            low++;
            mid++;
        }
        else if(nums[mid] == 1) {
            mid++;
        }
        else if(nums[mid] == 2) {
            temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;

            high--;
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
