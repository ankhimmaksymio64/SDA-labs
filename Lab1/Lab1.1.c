#include <stdio.h>

int main(void)
{
    double x, y;

    printf("Enter x: ");
    scanf("%lf", &x);

    if (x >= -49)
    {
        if (x < -10)
        {
            y = 10 * x * x * x + (7 * x) / 5 + 2;
            printf("y = %lf", y);
        }
        else
        {
            if (x <= 0)
            {
                printf("Error: y(x) doesn't exist");
            }
            else
            {
                if (x <= 10)
                {
                    y = 10 * x * x * x + (7 * x) / 5 + 2;
                    printf("y = %lf", y);
                }
                else
                {
                    if (x <= 20)
                    {
                        printf("Error: y(x) doesn't exist");
                    }
                    else
                    {
                        y = -x + 9;
                        printf("y = %lf", y);
                    }
                }
            }
        }
    }
    else
    {
        printf("Error: y(x) doesn't exist");
    }

    return 0;
}