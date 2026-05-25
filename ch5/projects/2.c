#include <stdio.h>

int main(void) {
    int hour, minute;
    
    printf("Enter 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    printf("12-hour time: ");

    if (hour >= 12 && minute > 0) {
        printf("%d:%.2d PM", hour - 12, minute);
    }
    else {
        printf("%d:%.2d AM", hour, minute);
    }

    return 0;    
}  