#include <stdio.h>

int main() {
    // 9
    int n;
    scanf("%d", &n);
    double v0 = 1.0, v1 = 0.3, v;
    if (n == 0) {
        v = v0;
    } else if (n == 1) {
        v = v1;
    } else {
        for (int i = 2; i <= n; i++) {
            v = (i + 2) * v0;
            v0 = v1;
            v1 = v;
        }
    }
    printf("%g\n", v);

    return 0;
}