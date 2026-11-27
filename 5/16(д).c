#include <stdio.h>
#include <math.h>

int main() {
    // 16
    double x, eps;
    scanf("%lf %lf", &x, &eps);
    double sum = 0.0, term = 1.0;
    int k = 1;
    while (fabs(term) >= eps) {
        sum += term;
        term *= x / k;
        k++;
    }
    printf("%g\n", sum);

    return 0;
}