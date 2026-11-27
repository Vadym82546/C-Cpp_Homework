#include <stdio.h>

int main() {
    // 10
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    double y1 = 3.0, y2 = 1.0, y3 = 5.0, y4 = 4.0, y5 = 2.1;

    printf("x | %4d | %4d | %4d | %4d | %4d |\n", x1, x2, x3, x4, x5);
    printf("--|------|------|------|------|------|\n");
    printf("y | %4.1f | %4.1f | %4.1f | %4.1f | %4.1f |\n", y1, y2, y3, y4, y5);

    return 0;
}