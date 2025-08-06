#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // BUBBLE SORT --> T.C: O(n^2), S.C: O(1)
    // Best Case: O(n), Worst Case: O(n^2), Avg Case: O(n^2)

    for (int i = 0; i < n - 1; i++) {
        bool isSwap = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwap = true;
            }
        }
        if (!isSwap)
            break;
    }

    // Printing array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Output: 1 2 3 4 5
    }

    return 0;
}
