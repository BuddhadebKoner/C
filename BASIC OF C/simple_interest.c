#include <stdio.h>


int main() {
    float principal, rate, time, si, ci;

    // Input the principal, rate of interest, and time period
    printf("Enter the principal: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate the simple interest
    si = (principal * rate * time) / 100;

    // Calculate the compound interest
    ci = principal * pow((1 + rate / 100), time) - principal;

    // Output the results
    printf("Simple Interest = %f\n", si);
    printf("Compound Interest = %f\n", ci);

    return 0;
}

