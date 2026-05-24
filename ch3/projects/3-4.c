#include <stdio.h>

int main(void) {
    int sec1, sec2, sec3;

    printf("Enter phone number: ");
    scanf("(%d) %d-%d", &sec1, &sec2, &sec3);
    printf("Phone: %d.%d.%d", sec1, sec2, sec3);

    return 0;    
}  