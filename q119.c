
//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    
    int arr[n];
    int freq[100001] = {0};
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (freq[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        
        freq[arr[i]]++;
    }
    
    return 0;
}

