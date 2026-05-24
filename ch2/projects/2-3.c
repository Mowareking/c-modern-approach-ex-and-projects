#include <stdio.h>
#define SPHERE_CONSTANT 4.0f/3.0f * 3.14

int main(void) {
    int radius;
    float volume;

    printf("Enter radius: ");
    scanf("%d", &radius);
    volume = SPHERE_CONSTANT * radius * radius * radius;
    printf("%f", volume); 
    
    return 0;
}