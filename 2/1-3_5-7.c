#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2) {
    return hypot(x2 - x1, y2 - y1);
}

double area(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double rosenbrock(double x, double y) {
    double a = x * x - y;
    double b = x - 1.0;
    return 100.0 * a * a + b * b;
}

int main() {
    // 1
    double x;
    scanf("%lf", &x);
    printf("%g\n", cos(x));

    // 2
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    printf("%g\n", hypot(a, b));

    // 3
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%g\n", area(a, b, c));

    // 5
    printf("%g %g %g\n", rosenbrock(1.0, 1.0), rosenbrock(0.0, 0.0), rosenbrock(2.0, 3.0));

    // 6
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    a = dist(x1, y1, x2, y2);
    b = dist(x2, y2, x3, y3);
    c = dist(x1, y1, x3, y3);
    printf("%g\n", area(a, b, c));

    // 7
    scanf("%lf %lf", &a, &b);
    printf("%g\n", acos(-1.0) * a * b);

    return 0;
}