// Translates an alphabetic phone number into numeric form:
// Enter phone number: CALLATT
// 2255288
// nonalphabetic characters (digits or punctuation, for example), leave them unchanged:
// Enter phone number: 1-800-COL-LECT
// 1-800-265-5328
// Assume that any letters entered by the user are upper case.

#include <stdio.h>

int main(void) {
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            if (ch <= 'C')      putchar('2');
            else if (ch <= 'F') putchar('3');
            else if (ch <= 'I') putchar('4');
            else if (ch <= 'L') putchar('5');
            else if (ch <= 'O') putchar('6');
            else if (ch <= 'S') putchar('7');
            else if (ch <= 'V') putchar('8');
            else                putchar('9');
        } 
        else {
            putchar(ch);
        }
        ch = getchar();
    }
    putchar('\n');

    return 0;
}