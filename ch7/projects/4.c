#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter phone number: ");

    while (ch != '\n') {

        ch = getchar();

        if (ch >= 65 && ch <= 89) {
            putchar(50 + ((ch - 65) / 3));
            //printf("%d", (ch - 59) / 3); 
        }
        else {
            putchar(ch);
        }
    }
}