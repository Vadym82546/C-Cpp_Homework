#include <stdio.h>

int main() {
    // 19
    int n;
    scanf("%d", &n);
    double p = 1.0;
    for (int i = 2; i <= n; i++) {
        p *= 1.0 - 1.0 / ((double)i * i);
    }
    printf("%g\n", p);

    return 0;
}