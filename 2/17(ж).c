#include <stdio.h>
#include <math.h>

double invsqrt(double x, double a) {
    return x / sqrt(1.0 + a * x * x);
}

double invsqrt_derivative(double x, double a) {
    double t = 1.0 + a * x * x;
    return 1.0 / (t * sqrt(t));
}

int main() {
    // 17
    double x, a;
    scanf("%lf %lf", &x, &a);
    printf("%g %g\n", invsqrt(x, a), invsqrt_derivative(x, a));

    return 0;
}