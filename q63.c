//Merge two arrays.
#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int n, m, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        merged[i] = a[i];
    }

    for (i = 0; i < m; i++) {
        merged[n + i] = b[i];
    }

    for (i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
