#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter value of num1: ");
    scanf("%d", &num1);

    printf("Enter value of num2: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping, num1 is: %d\n", num1);
    printf("After swapping, num2 is: %d\n", num2);

    return 0;
}

