#include <stdio.h>

int main() {
    printf("Enter the value of x: ");
    double x;
    scanf("%lf", &x);
    // This is the polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 which
    // can be computed using Horner's rule as shown below.
    // ((((3x + 2)x – 5)x – 1)x + 7)x – 6
    // Horner's rule allows us to compute the value of the polynomial with fewer multiplications, which can be more efficient.
    double result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result is: %lf\n", result);
    return 0;
}