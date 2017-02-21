#include <stdio.h>

int main() {
    int n = 4000000, sum = 2, prev = 1, curr = 2, tmp;

    while (curr <= n) {
        tmp = prev + curr;
        if (tmp % 2 == 0) {
            sum += tmp;
        }
        prev = curr;
        curr = tmp;
    }

    printf("%d\n", sum);

    return 0;
}
