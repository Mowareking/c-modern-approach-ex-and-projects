#include <stdio.h>

int main(void) {
    int num, digit1, digit2;

    printf("Enter a two-digit number: ");
/*     
    // Kinda cheated initially lol
    scanf("%1d%1d", &first_digit, &second_digit);

    printf("Reverse is: %d%d", second_digit, first_digit);
 */
    scanf("%d", &num);

    digit1 = num / 10;
    digit2 = num %= 10;

    printf("Reverse is: %d%d", digit2, digit1);

    return 0;    
}  