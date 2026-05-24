#include <stdio.h>

int main(void) {
    float balance, loan, apr, monthly;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &apr);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    apr = apr / 100;
    apr = apr / 12;
    apr = 1 + apr;

    balance = loan * apr - monthly;

    printf("Balance after first payment: %.2f\n", balance);
    balance = balance * apr - monthly;

    printf("Balance after second payment: %.2f\n", balance);
    balance = balance * apr - monthly;

    printf("Balance after third payment: %.2f\n", balance);

    return 0;
}