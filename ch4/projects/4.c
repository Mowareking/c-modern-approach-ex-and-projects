#include <stdio.h>
int main(void) {
    int num;

    printf("Enter number (0-32767): ");
    scanf("%d", &num);

    printf("In octal: %d%d%d%d%d", (num / 4096) % 8, (num / 512) % 8, (num / 64) % 8, (num / 8) % 8, num % 8);
    
    return 0;    
}  