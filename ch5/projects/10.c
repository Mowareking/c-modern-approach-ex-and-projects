#include <stdio.h>
int main(void) {
    int grade, band;
    
    printf("Enter grade: ");
    scanf("%d", &grade);

    band = grade / 10;

    switch (band) {
        case 9: case 10: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("C"); break;
        case 6: printf("D"); break; 
        case 0: case 1: case 2: case 3: case 4: case 5: printf("F"); break;
        default: printf("Error"); break;
    }

    return 0;    
}  