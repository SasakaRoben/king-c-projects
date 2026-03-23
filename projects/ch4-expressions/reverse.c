#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter an 3-digit integer: ");
    scanf("%d", &num);

    reversed = (num % 10) * 100;
    num /= 10;
    reversed += (num % 10) * 10;
    num /= 10;
    reversed += num % 10;
    
    printf("Reversed number: %d\n", reversed);
    return 0;
}