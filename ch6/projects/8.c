#include <stdio.h>

int main(void) {
    int days, start;
    
    printf("Enter days: ");
    scanf("%d", &days);
    printf("Enter starting day: ");
    scanf("%d", &start);

    for (int i = 1; i < start; i++) {
        printf("   ");
    }

    for (int i = 1; i <= days; i++) {
        printf("%3d", i);
        if ((i + start - 1) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;    
}  