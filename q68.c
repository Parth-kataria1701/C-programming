//Delete an element from an array.
#include <stdio.h>

int main() {
    int n, arr[100], pos, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
