#include <stdio.h>

int main(void) {
    int n;
    const double x = 0.5;
    double sum = 0.0;
    long long ops = 0;

    printf("Enter n:");
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    ops += 2;

    for (int i = 0; i <= n; i++) {
        double num = (i % 2 == 0) ? 1.0 : -1.0;
        double denom = 1.0;
        ops += 5;

        for (int j = 1; j <= 2 * i + 1; j++) {
            num *= x;
            denom *= j;
            ops += 5;
        }
        ops += 2;

        sum += num / denom;
        ops += 3;
    }
    ops += 2;

    printf("Result: %.7f\nOperations: %lld\n", sum, ops);
    return 0;
}