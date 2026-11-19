
#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;
    int temp[5];
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[k] = arr[i];
            k++;
        }
    }

    while (k < n) {
        temp[k] = 0;
        k++;
    }

    printf("Array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
 
