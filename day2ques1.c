#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %d\n", area);
    printf("Perimeter = %d", perimeter);

    return 0;
}