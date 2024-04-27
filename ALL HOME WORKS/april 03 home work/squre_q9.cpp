#include <stdio.h>

int main()
{
    float side, area;

    printf("Enter length of square's side: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of square is: %.2f", area);

    return 0;
}

