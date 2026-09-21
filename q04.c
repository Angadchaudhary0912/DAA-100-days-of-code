/*Given an integer array arr and a target value target, find the indices of two elements whose
 sum equals target.  Assume exactly one valid pair exists, and the same element cannot be used
  twice*/

 #include <stdio.h>

int main() {
    int arr[] = {7, 9, 11, 15};
    int target;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                return 0;
            }
        }
    }

    return 0;
}