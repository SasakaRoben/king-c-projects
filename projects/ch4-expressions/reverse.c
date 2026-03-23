#include <stdio.h>

int main() {
    int d1, d2, d3;
    printf("Enter an 3-digit integer: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("Reversed number: %d%d%d\n", d3, d2, d1);
    return 0;
}