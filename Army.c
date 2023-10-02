#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int d[n - 1];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &d[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    int totalYears = 0;
    for (int i = a; i < b; i++) {
        totalYears += d[i - 1];
    }

    printf("%d\n", totalYears);

    return 0;
}
