// Counts the number of vowels (a, e, i, o, and u) in a sentence:
// Enter a sentence: And that's the way it is.
// Your sentence contains 6 vowels.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int vowels = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        ch = toupper((unsigned char)ch);
        
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    } 
        
    printf("Your sentence contains %d vowel(s).\n", vowels);
    return 0;
}