#include <stdio.h>

int main(void) {
    int asset, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &asset);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$%6.2f\t%-d/%-d/%-d", asset, price, month, day, year);

    return 0;    
}  