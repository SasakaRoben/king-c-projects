#include <stdio.h>

int main() {
    double income;
    double tax;

    printf("Enter the taxable income: ");
    scanf("%lf", &income);

    if (income < 750.0)
    {
        tax = income * 0.01;
    }
    else if (income < 2250.0)
    {
        tax = 7.50 + (income - 750.0) * 0.02;
    }
    else if (income < 3750.0)
    {
        tax = 37.50 + (income - 2250.0) * 0.03;
    }
    else if (income < 5250.0)
    {
        tax = 82.50 + (income - 3750.0) * 0.04;
    }
    else if (income < 7000.0)
    {
        tax = 142.50 + (income - 5250.0) * 0.05;
    }
    else
    {
        tax = 230.00 + (income - 7000.0) * 0.06;
    }
    printf("The tax due is $%.2f\n", tax);
    return 0;
}