#include <stdio.h>

int main(void) {
    float price;

    printf("Enter price: ");
    scanf("%f", &price);

    price = price * 1.05;

    printf("With tax added: $%.2f", price);
    
    return 0;
}