#include <stdio.h>

int main()
{
    float p, r, t, si, ci, amount;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    amount = p * (1 + r / 100) * (1 + r / 100);
    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f", ci);

    return 0;
}