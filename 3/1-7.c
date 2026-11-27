#include <stdio.h>
#include <stdint.h>
#include <math.h>

uint16_t mul8(uint8_t a, uint8_t b) {
    return (uint16_t)a * b;
}

void solve_quad(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("inf\n");
            else printf("0\n");
        } else {
            printf("1: %g\n", -c / b + 0.0);
        }
    } else {
        double d = b * b - 4.0 * a * c;
        if (d < 0) {
            printf("0\n");
        } else if (d == 0) {
            printf("1: %g\n", -b / (2.0 * a) + 0.0);
        } else {
            double sd = sqrt(d);
            printf("2: %g %g\n", (-b - sd) / (2.0 * a) + 0.0, (-b + sd) / (2.0 * a) + 0.0);
        }
    }
}

void solve_biquad(double a, double b, double c) {
    double r[4];
    int k = 0;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("inf\n");
            else printf("0\n");
            return;
        }
        double t = -c / b;
        if (t == 0) r[k++] = 0.0;
        else if (t > 0) {
            r[k++] = -sqrt(t);
            r[k++] = sqrt(t);
        }
    } else {
        double d = b * b - 4.0 * a * c;
        if (d == 0) {
            double t = -b / (2.0 * a);
            if (t == 0) r[k++] = 0.0;
            else if (t > 0) {
                r[k++] = -sqrt(t);
                r[k++] = sqrt(t);
            }
        } else if (d > 0) {
            double sd = sqrt(d);
            double t1 = (-b - sd) / (2.0 * a);
            double t2 = (-b + sd) / (2.0 * a);
            if (t1 == 0) r[k++] = 0.0;
            else if (t1 > 0) {
                r[k++] = -sqrt(t1);
                r[k++] = sqrt(t1);
            }
            if (t2 == 0) r[k++] = 0.0;
            else if (t2 > 0) {
                r[k++] = -sqrt(t2);
                r[k++] = sqrt(t2);
            }
        }
    }

    if (k == 0) {
        printf("0\n");
    } else {
        printf("%d:", k);
        for (int i = 0; i < k; i++) printf(" %g", r[i]);
        printf("\n");
    }
}

int main() {
    // 1
    int n;
    scanf("%d", &n);
    int u = n % 10, t = (n / 10) % 10, h = n / 100;
    printf("%d %d %d\n", u, t, h);
    printf("%d\n", h + t + u);
    printf("%d\n", u * 100 + t * 10 + h);

    // 2
    scanf("%d", &n);
    h = n / 100;
    t = (n / 10) % 10;
    u = n % 10;
    if (h != t && h != u && t != u) {
        printf("%d %d %d %d %d %d\n",
               h * 100 + t * 10 + u,
               h * 100 + u * 10 + t,
               t * 100 + h * 10 + u,
               t * 100 + u * 10 + h,
               u * 100 + h * 10 + t,
               u * 100 + t * 10 + h);
    }

    // 3
    int a1, b1, c1;
    scanf("%d,%d,%d", &a1, &b1, &c1);
    printf("%d\n", a1 * b1 * c1);

    long long a2, b2, c2;
    scanf("%lld,%lld,%lld", &a2, &b2, &c2);
    printf("%lld\n", a2 * b2 * c2);

    // 4
    uint8_t u1, u2;
    scanf("%hhu %hhu", &u1, &u2);
    printf("%hu\n", mul8(u1, u2));

    // 5
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (x > y) printf("%g %g\n", x, y);
    else printf("%g %g\n", y, x);

    // 6
    double z, max_a, min_a;
    scanf("%lf %lf %lf", &x, &y, &z);
    max_a = x;
    if (fabs(y) > fabs(max_a)) max_a = y;
    if (fabs(z) > fabs(max_a)) max_a = z;
    min_a = x;
    if (fabs(y) < fabs(min_a)) min_a = y;
    if (fabs(z) < fabs(min_a)) min_a = z;
    printf("%g %g\n", max_a, min_a);

    // 7
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    solve_quad(a, b, c);
    solve_biquad(a, b, c);

    return 0;
}