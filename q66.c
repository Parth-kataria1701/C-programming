//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, element;

    scanf("%d", &n);

    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    int i = n - 1;

    // Shift elements greater than the new element
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the element
    arr[i + 1] = element;

    // Print the updated array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
