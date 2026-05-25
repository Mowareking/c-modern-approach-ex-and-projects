#include <stdio.h>

int main(void) {
    float num, max = 0;
    
    do  {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num > max) {
            max = num;
        }
    }
    while (num > 0);

    printf("The largest number is: %.2f", max);

    return 0;    
}  