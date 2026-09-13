#include <stdio.h>

int main()
{
    int n, first, last, divisor = 1, result;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;

    while(n / divisor >= 10)
    {
        divisor = divisor * 10;
    }

    first = n / divisor;

    result = n % divisor;
    result = result - last;
    result = result + first;

    result = result + (last * divisor);
    result = result - (first * divisor);

    printf("%d", result);

    return 0;
}