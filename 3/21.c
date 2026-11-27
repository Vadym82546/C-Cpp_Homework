#include <stdio.h>

int main() {
    // 21
    double x, y, z, r;
    scanf("%lf %lf %lf %lf", &x, &y, &z, &r);
    if (r >= 0 && x * x + y * y + z * z <= r * r) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}