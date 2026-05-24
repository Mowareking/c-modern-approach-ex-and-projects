#include <stdio.h>

int main(void) {
    int day, month, year;

    printf("Enter a date: ");
    scanf("%d/%d/%d",&month, &day, &year);

    printf("Date: %.4d%.2d%.2d", year, month, day);

    return 0;    
}  