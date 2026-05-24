#include <stdio.h>
int main(void) {
    int num, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    digit1 = num / 100;
    digit2 = num % 100 / 10;
    digit3 = num % 10; // num % 100 % 10

    printf("Reverse is: %d%d%d", digit3, digit2, digit1);

    return 0;    
}  