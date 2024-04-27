#include <stdio.h>
#include <math.h>

int main()
{
    float radius, circumference, area;

    printf("Enter the radius of the half circle: ");
    scanf("%f", &radius);

    circumference = M_PI * radius;
    area = (M_PI * radius * radius) / 2;

    printf("Circumference of the half circle = %.2f units\n", circumference);
    printf("Area of the half circle = %.2f sq. units\n", area);

    return 0;
}

