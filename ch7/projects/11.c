#include <stdio.h>

int main(void) {
    char ch, initial;

    printf("Enter first and last name: ");
    
    scanf(" %c", &initial);

    while (getchar() != ' ');
    while ((ch = getchar()) == ' ');

    do {
        putchar(ch);
    } while ((ch = getchar()) != '\n' && ch != ' ');

    
    printf(", %c.", initial);
    
    return 0;
}