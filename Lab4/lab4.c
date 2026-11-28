#include <stdio.h>

int main() {

    double A[10][10] = {
        {15.0, 12.5,  9.0,  5.5,  5.5,  5.5,  4.0,  2.5,  1.0,  0.0},
        { 5.5,  5.5,  5.5,  4.2,  3.1,  2.0,  1.5,  0.5, -1.0, -3.5},
        {25.0, 20.5, 18.0, 15.2, 12.0, 10.5,  8.0,  6.5,  5.5,  5.5},
        {10.0,  9.0,  8.0,  7.0,  6.0,  5.0,  4.0,  3.0,  2.0,  1.0},
        { 5.5,  5.5,  5.5,  5.5,  5.5,  5.5,  5.5,  5.5,  5.5,  5.5},
        {19.4, 16.2, 13.8, 11.1,  5.5,  4.3,  2.9,  1.1, -0.5, -2.0},
        { 5.5,  4.0,  3.0,  2.0,  1.0,  0.0, -1.0, -2.0, -3.0, -4.0},
        {30.0, 27.5, 24.0, 21.5, 18.0, 14.5, 11.0,  9.5,  7.0,  5.5},
        {-1.0, -2.5, -4.0, -5.5, -7.0, -8.5,-10.0,-11.5,-13.0,-15.0},
        {12.0, 10.5,  9.0,  7.5,  6.0,  5.5,  4.5,  3.0,  1.5,  0.0}
    };

    double X;
    printf("Enter target value X: ");
    if (scanf("%lf", &X) != 1) {
        printf("Input error.\n");
        return 1;
    }

    printf("\nMatrix A[10][10] (rows sorted in non-increasing order):\n");
    for (int i = 0; i < 10; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < 10; j++) {
            printf("%6.1f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nBinary search results for X = %.2f (Algorithm #1):\n", X);
    for (int i = 0; i < 10; i++) {
        int left = 0;
        int right = 9;
        int found_col = -1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (A[i][mid] == X) {
                found_col = mid;
                break;
            } else if (A[i][mid] > X) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (found_col != -1) {
            printf("Row %d: FOUND at [%d][%d]\n", i, i, found_col);
        } else {
            printf("Row %d: NOT FOUND\n", i);
        }
    }

    return 0;
}