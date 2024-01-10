#include <stdio.h>
#include <math.h>

int main()
{
    float radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = M_PI * pow(radius, 2);

    printf("Area of circle is: %.2f", area);

    return 0;
}

