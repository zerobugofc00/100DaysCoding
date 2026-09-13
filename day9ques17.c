#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Two real and different roots\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f", r2);
    }
    else if(d == 0)
    {
        r1 = -b / (2 * a);

        printf("Two real and equal roots\n");
        printf("Root = %.2f", r1);
    }
    else
    {
        printf("No real roots");
    }

    return 0;
}