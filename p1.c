#include <stdio.h>

int simple_loop(int n, int a, int b) {
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        if (i % a == 0 || i % b == 0) sum += i;
    }

    return sum;
}

int sum_divisible_by(int n, int d) {
    int m = (n - 1) / d;

    return m * (m + 1) / 2 * d;
}

int main() {
    int n, a, b;

    scanf("%d%d%d", &n, &a, &b);

    printf("%d\n", sum_divisible_by(n, a) + sum_divisible_by(n, b) - sum_divisible_by(n, a * b));

    return 0;
}
