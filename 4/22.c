#include <stdio.h>

int main() {
    // 22
    int n, prev, curr, next, count = 0;
    scanf("%d", &n);
    if (n >= 1) scanf("%d", &prev);
    if (n >= 2) scanf("%d", &curr);
    for (int i = 2; i < n; i++) {
        scanf("%d", &next);
        if (curr > prev && curr > next) {
            count++;
        }
        prev = curr;
        curr = next;
    }
    printf("%d\n", count);

    return 0;
}