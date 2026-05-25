#include <stdio.h>

int main(void) {
    int factorial = 1.00f;
    float n, e = 1.00f;
    float next_term = 1.00f;
    
    printf("Enter epsilon: ");
    scanf("%f", &n);

    for (int i = 1; next_term >= n; i++) {
        next_term = 1.00f / (factorial *= i);
        e += next_term;
    }
    printf("%f\n", e);



    return 0;    
}  