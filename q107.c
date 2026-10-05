//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.N.B:- Print the output for each element in a comma separated fashion.- Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Brute force approach
    for (int i = 0; i < n; i++) {
        int previousGreater = -1;

        // Search from left to right, but keep updating.
        // The last greater element found is the nearest one.
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", previousGreater);
    }

    return 0;
}
