#include <stdio.h>
#include <math.h>

double eReLu(double a, double x) {
    return x < 0 ? a * (exp(x) - 1.0) : 0.0;
}

double eReLu_derivative(double a, double x) {
    return x < 0 ? a * exp(x) : 0.0;
}

int main() {
    // 23
    double a, x;
    scanf("%lf %lf", &a, &x);
    printf("%g %g\n", eReLu(a, x), eReLu_derivative(a, x));

    return 0;
}