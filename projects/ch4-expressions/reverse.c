#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter an 3-digit integer: ");
    scanf("%d", &num);

    int last_digit;
    last_digit = num % 10;
    reversed = last_digit * 100;
    num /= 10;
    last_digit = num % 10;
    reversed += last_digit * 10;
    num /= 10;
    last_digit = num % 10;
    reversed += last_digit;
    printf("Reversed number: %d\n", reversed);
    return 0;
}