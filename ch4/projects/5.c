#include <stdio.h>
int main(void) {
    int type, manufacturer, product, first_sum, second_sum, total;

    printf("Enter the first 11 digits of UPC: ");
    scanf("%1d%5d%5d", &type, &manufacturer, &product);

    first_sum = type + (manufacturer / 1000 % 10) + (manufacturer / 10 % 10) + (product / 10000) + (product / 100 % 10) + (product % 10);
    second_sum = (manufacturer / 10000) + (manufacturer / 100 % 10) + (manufacturer % 10) + (product / 1000 % 10) + (product / 10 % 10);
    
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d", 9 - ((total - 1) % 10));
    
    return 0;
}  