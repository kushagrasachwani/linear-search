#include <stdio.h>

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {3, 2, 7, 1, 9};
    int n = 5 ;
    int target = 3;
    int result = linear_search(arr, n, target);
    if (result == -1) {
        printf("Target value not found in the array.\n");
    } else {
        printf("Target value found at index: %d\n", result);
    }
    return 0;
}
