#include <stdio.h>
#include <math.h>

double median(double a, double b, double c) {
    return 0.5 * sqrt(2.0 * b * b + 2.0 * c * c - a * a);
}

double bisector(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return 2.0 * sqrt(b * c * p * (p - a)) / (b + c);
}

double height(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return 2.0 * s / a;
}

int main() {
    // 8
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%g %g %g\n", median(a, b, c), median(b, a, c), median(c, a, b));
    printf("%g %g %g\n", bisector(a, b, c), bisector(b, a, c), bisector(c, a, b));
    printf("%g %g %g\n", height(a, b, c), height(b, a, c), height(c, a, b));

    return 0;
}