#include <stdio.h>
#include <math.h>

int main() {
    // 1
    printf("%d %d %d %g %d %g\n", 2 + 31, 45 * 54 - 11, 15 / 4, 15.0 / 4, 67 % 5, (2 * 45.1 + 3.2) / 2);

    // 2
    float n1 = 1e-4f, n2 = 24.33e5f;
    double n3 = 3.141592653589793, n4 = 2.718281828459045;
    long double n5 = sqrtl(5.0L), n6 = logl(100.0L);
    printf("%.2f %.2f %.2f %.2f %.2Lf %.2Lf\n", n1, n2, n3, n4, n5, n6);

    // 3
    int a;
    scanf("%d", &a);
    printf("-%d-%d-%d\n|%d|%d\n-%d-%d-%d\n", a, a, a, a, a, a, a, a);

    // 4
    double g = 6.673e-11, m1 = 5.97e24, m2 = 7.35e22, r = 3.84e8;
    double f = g * (m1 * m2) / (r * r);
    printf("F = %e\n", f);

    // 5
    double x, x2, x3, x4, x6, x8, x9, x12, x15, x16, x24, x28, x32, x64;
    scanf("%lf", &x);
    x2 = x * x;
    x4 = x2 * x2;
    x6 = x4 * x2;
    x8 = x4 * x4;
    x9 = x8 * x;
    x3 = x2 * x;
    x12 = x6 * x6;
    x15 = x12 * x3;
    x16 = x8 * x8;
    x24 = x16 * x8;
    x28 = x24 * x4;
    x32 = x16 * x16;
    x64 = x32 * x32;
    printf("%g %g %g %g %g %g\n", x4, x6, x9, x15, x28, x64);

    // 6
    double c;
    printf("C = ");
    scanf("%lf", &c);
    f = 9.0 * c / 5.0 + 32.0;
    printf("F = %g\n", f);

    // 7
    scanf("%lf", &x);
    int ti = (int)x, tm = (int)trunc(x);
    double fi = x - ti, fm = x - trunc(x);
    int ci = ti + (x > ti), cm = (int)ceil(x);
    int fli = ti - (x < ti), flm = (int)floor(x);
    int ri = x >= 0 ? (int)(x + 0.5) : (int)(x - 0.5), rm = (int)round(x);
    printf("%d %d\n%g %g\n%d %d\n%d %d\n%d %d\n", ti, tm, fi, fm, ci, cm, fli, flm, ri, rm);

    // 8
    double u, v;
    scanf("%lf", &u);
    scanf("%lf", &v);
    printf("%f %f\n", u - v, u * v);

    // 9
    scanf("%lf %lf", &u, &v);
    double avg = (u + v) / 2.0;
    double harm = 2.0 * u * v / (u + v);
    printf("%e %f\n%e %f\n", avg, avg, harm, harm);

    return 0;
}