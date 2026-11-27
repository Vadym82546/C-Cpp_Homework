#include <stdio.h>
#include <math.h>

int main() {
    // 16
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    double y1, y2, y3, y4, y5;

    y1 = exp(-x1 * x1);
    y2 = exp(-x2 * x2);
    y3 = exp(-x3 * x3);
    y4 = exp(-x4 * x4);
    y5 = exp(-x5 * x5);

    printf("x    |  %d   |  %d   |  %d   |  %d   |  %d   |\n", x1, x2, x3, x4, x5);
    printf("-----|------|------|------|------|------|\n");
    printf("F(x) | %4.2f | %4.2f | %4.2f | %4.2f | %4.2f |\n\n", y1, y2, y3, y4, y5);

    y1 = sqrt(x1);
    y2 = sqrt(x2);
    y3 = sqrt(x3);
    y4 = sqrt(x4);
    y5 = sqrt(x5);

    printf("x    |  %d   |  %d   |  %d   |  %d   |  %d   |\n", x1, x2, x3, x4, x5);
    printf("-----|------|------|------|------|------|\n");
    printf("F(x) | %4.2f | %4.2f | %4.2f | %4.2f | %4.2f |\n", y1, y2, y3, y4, y5);

    return 0;
}