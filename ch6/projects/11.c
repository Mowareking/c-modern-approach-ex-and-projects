#include <stdio.h>

int main(void) {
    int n, factorial = 1.00f;
    float e = 1.00f;
    
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        e += 1.00f / (factorial *= i);
    }

    /* 
        // original implementation
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            e +=  (1.00f / factorial);
            factorial = 1;
        } */
   printf("%f\n", e);


    return 0;    
}  