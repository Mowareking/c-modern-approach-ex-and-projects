#include <stdio.h>
#include <math.h>

int main(void) {
    double x, crit_region, y = 1.0;

    crit_region = .00001 * y;

    printf("Enter positive number: " );
    scanf("%lf", &x);

    while (fabs((y + x / y) / 2 - y) > crit_region)
        y = (y + x / y) / 2;

    printf("Square root: %lf", y);
    
    return 0;
}