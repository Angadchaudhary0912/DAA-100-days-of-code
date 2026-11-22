
#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    i = 0;
    j = n - 1;

    while(i < j) {
        if(nums[i] % 2 == 0) {
            i++;
        }
        else if(nums[j] % 2 != 0) {
            j--;
        }
        else {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }

    printf("Modified array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
