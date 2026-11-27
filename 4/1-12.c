#include <stdio.h>
#include <math.h>
#include <float.h>

double sin_n(double x, int n) {
    for (int i = 0; i < n; i++) {
        x = sin(x);
    }
    return x;
}

double poly_a(double x, int n) {
    double res = 1.0;
    for (int i = 0; i < n; i++) {
        res = res * x + 1.0;
    }
    return res;
}

double poly_b(double x, double y, int n) {
    double res = 1.0, xp = x * x, yp = y;
    for (int i = 1; i <= n; i++) {
        res += xp * yp;
        xp *= xp;
        yp *= y;
    }
    return res;
}

unsigned long long fact2(int n) {
    unsigned long long res = 1;
    for (int i = n; i > 1; i -= 2) {
        res *= i;
    }
    return res;
}

int main() {
    // 1
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%g\n", sin_n(x, n));

    // 2
    scanf("%d", &n);
    printf("%d!=", n);
    for (int i = 1; i <= n; i++) {
        printf("%d%s", i, i < n ? "*" : "\n");
    }
    printf("%d!=", n);
    for (int i = n; i >= 1; i--) {
        printf("%d%s", i, i > 1 ? "*" : "\n");
    }

    // 3
    printf("%g\n", poly_a(2.0, 3));
    printf("%g\n", poly_b(1.0, 2.0, 4));

    // 4
    scanf("%d %lf", &n, &x);
    double sum = 0.0, p = x;
    for (int i = 1; i <= n; i++) {
        sum += i * p;
        p *= x;
    }
    printf("%g\n", sum);

    // 5
    scanf("%d", &n);
    printf("%llu\n", fact2(n));

    // 6
    scanf("%d", &n);
    double sa = 0.0, sb = 0.0;
    for (int i = 0; i < n; i++) {
        sa = sqrt(2.0 + sa);
    }
    for (int i = n; i >= 1; i--) {
        sb = sqrt(3.0 * i + sb);
    }
    printf("%g %g\n", sa, sb);

    // 7
    scanf("%lf %d", &x, &n);
    double ex = 1.0, term = 1.0;
    for (int i = 1; i <= n; i++) {
        term *= x / i;
        ex += term;
    }
    printf("%g\n", ex);

    // 8
    long long m, p4 = 1;
    int k = 0;
    scanf("%lld", &m);
    while (p4 <= m / 4) {
        p4 *= 4;
        k++;
    }
    printf("%d\n", k);

    // 9
    unsigned long long n9, p2 = 1;
    scanf("%llu", &n9);
    while (p2 <= n9) {
        p2 *= 2;
    }
    printf("%llu\n", p2);

    // 10
    float eps = 1.0f, one_plus = 2.0f;
    while (one_plus != 1.0f) {
        eps /= 2.0f;
        one_plus = 1.0f + eps;
    }
    printf("%e %e\n", eps, FLT_EPSILON / 2.0f);

    // 11
    double val, s1 = 0.0;
    int idx = 0;
    while (1) {
        printf("a[%d]=", idx++);
        scanf("%lf", &val);
        if (val == 0.0) break;
        s1 += val;
    }
    printf("%g\n", s1);

    int v, cnt = 0;
    double s2 = 0.0, pr = 1.0;
    while (1) {
        scanf("%d", &v);
        if (v == 0) break;
        s2 += v;
        pr *= v;
        cnt++;
    }
    if (cnt > 0) {
        printf("%g %g\n", s2 / cnt, pow(pr, 1.0 / cnt));
    }

    // 12
    scanf("%d", &n);
    long double sub = 1.0L;
    int sign = -1;
    for (int i = 1; i <= n; i++) {
        sub = i * sub + sign;
        sign = -sign;
    }
    printf("%.0Lf\n", sub);

    return 0;
}