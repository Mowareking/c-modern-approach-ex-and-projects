#include <stdio.h>

int main(void) {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);

    if (num >= 9 && num <= 0) {
        printf("1 digit");
    }
    else if (num <= 99) {
        printf("2 digits");
    }
    else if (num <= 999) {
        printf("3 digits");
    }
    else {
        printf("4 digits");
    }

    return 0;    
}  