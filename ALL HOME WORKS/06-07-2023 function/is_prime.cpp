#include <stdio.h>

void isprime(int);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    isprime(num);

    return 0;
}

void isprime(int num)
{
    if (num <= 1)
    {
        printf("%d is not a prime number", num);
        return;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            return;
        }
    }

    printf("%d is a prime number", num);
}

