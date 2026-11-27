#include <stdio.h>
#include <math.h>

long long fib(int n) {
    if (n <= 0) return 0;
    long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        long long t = a + b;
        a = b;
        b = t;
    }
    return b;
}

int fib_le(double a) {
    if (a < 0) return -1;
    if (a < 1) return 0;
    long long f0 = 0, f1 = 1;
    int k = 1;
    while (f0 + f1 <= a) {
        long long t = f0 + f1;
        f0 = f1;
        f1 = t;
        k++;
    }
    return k;
}

int fib_gt(double a) {
    if (a < 0) return 0;
    long long f0 = 0, f1 = 1;
    int k = 1;
    while (f1 <= a) {
        long long t = f0 + f1;
        f0 = f1;
        f1 = t;
        k++;
    }
    return k;
}

long long fib_sum() {
    long long f0 = 0, f1 = 1, s = 0;
    while (f1 <= 1000) {
        s += f1;
        long long t = f0 + f1;
        f0 = f1;
        f1 = t;
    }
    return s;
}

int steps(long long x) {
    int cnt = 0;
    while (x != 1) {
        if (x % 2 == 0) x /= 2;
        else x = 3 * x + 1;
        cnt++;
    }
    return cnt;
}

double taylor_exp(double x, double eps) {
    double s = 0.0, t = 1.0;
    int k = 1;
    while (fabs(t) >= eps) {
        s += t;
        t *= x / k;
        k++;
    }
    return s;
}

double taylor_phi(double x, double eps) {
    double s = 0.0, u = x, t = x;
    int k = 1;
    while (fabs(t) >= eps) {
        s += t;
        u = -u * x * x / k;
        t = u / (2 * k + 1);
        k++;
    }
    return s;
}

int main() {
    // 1
    double a, s = 0.0;
    int n = 0;
    scanf("%lf", &a);
    do {
        n++;
        s += 1.0 / n;
    } while (s <= a);
    printf("%g %d\n", s, n);

    // 2
    scanf("%d %lf", &n, &a);
    printf("%lld %d %d %lld\n", fib(n), fib_le(a), fib_gt(a), fib_sum());

    // 3
    int max_s = 0, max_n = 1;
    scanf("%d", &n);
    printf("%d\n", steps(n));
    for (int i = 1; i < 1000; i++) {
        int cur = steps(i);
        if (cur > max_s) {
            max_s = cur;
            max_n = i;
        }
    }
    printf("%d %d\n", max_n, max_s);

    // 4
    scanf("%d", &n);
    double pa = 1.0, pb = 1.0, inv_f = 1.0;
    int sign = 1;
    for (int i = 1; i <= n; i++) {
        inv_f /= i;
        pa *= 1.0 + inv_f;
        pb *= 1.0 + (sign * i * i) / 4.0;
        sign = -sign;
    }
    printf("%g %g\n", pa, pb);

    // 5
    long long x1 = -99, x2 = -99, x3 = -99, x4 = -99;
    int idx = 3;
    while (x4 <= 0) {
        x4 = x3 + x1 + 100;
        x1 = x2;
        x2 = x3;
        x3 = x4;
        idx++;
    }
    printf("%lld %d\n", x4, idx);

    // 6
    double b;
    scanf("%d %lf", &n, &b);
    double fa = b;
    for (int k = 1; k <= n; k++) {
        fa = b + 1.0 / fa;
    }
    double fb = 4.0 * n + 2.0;
    for (int k = 1; k <= n; k++) {
        fb = 4.0 * (n - k) + 2.0 + 1.0 / fb;
    }
    double fc = 2.0;
    for (int k = 1; k < n; k++) {
        fc = 2.0 + 1.0 / (1.0 + 1.0 / fc);
    }
    fc = 1.0 + 1.0 / fc;
    printf("%g %g %g\n", fa, fb, fc);

    // 7
    scanf("%d", &n);
    double a1 = 0.0, a2 = 1.0, b1 = 1.0, b2 = 0.0, p2 = 2.0, s7 = 0.0;
    if (n >= 1) s7 += p2 / (a1 + b1);
    if (n >= 2) {
        p2 *= 2.0;
        s7 += p2 / (a2 + b2);
    }
    for (int k = 3; k <= n; k++) {
        double bk = b2 + a2;
        double ak = a2 / k + a1 * bk;
        p2 *= 2.0;
        s7 += p2 / (ak + bk);
        a1 = a2;
        a2 = ak;
        b1 = b2;
        b2 = bk;
    }
    printf("%g\n", s7);

    // 8
    double x, eps;
    scanf("%lf %lf", &x, &eps);
    printf("%g %g\n", taylor_exp(x, eps), exp(x));
    printf("%g %g\n", taylor_phi(x, eps), 0.5 * sqrt(acos(-1.0)) * erf(x));

    return 0;
}