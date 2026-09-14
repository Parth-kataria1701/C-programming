//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    int largest, secondLargest;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = secondLargest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}
