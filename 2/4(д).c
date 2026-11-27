#include <stdio.h>

double poly(double x) {
    double t = 2.0 * x;
    double t2 = t * t;
    double u = t + 1.0;
    return t2 * (t2 + u) + u;
}

int main() {
    // 4
    double x;
    scanf("%lf", &x);
    printf("%g\n", poly(x));

    return 0;
}