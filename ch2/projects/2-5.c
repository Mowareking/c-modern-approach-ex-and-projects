#include <stdio.h>

int exponent(int num, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * num;
    }      
    return result;
}

int main(void) {
    int x, result;

    scanf("%d", &x);
    result = 3 * exponent(x, 5) + 2 * exponent(x, 4) - 5 * exponent(x, 3) - exponent(x, 2) + 7 * x - 6;
    printf("%d", result);

    return 0;
}