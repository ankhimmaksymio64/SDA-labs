#include <stdio.h>

int main(void) {
    int n;
    const double x = 0.5;
    double term = x;
    double sum = term;
    long long ops = 0;

    printf("Enter n: ");

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }
    ops += 2;

    for (int i = 1; i <= n; i++) {
        term = term * (-x * x) / ((2.0 * i) * (2.0 * i + 1.0));
        sum += term;
        ops += 9;
    }
    ops += 2;

    printf("Result: %.7f\n", sum);
    printf("Operations: %lld\n", ops);
    return 0;
}