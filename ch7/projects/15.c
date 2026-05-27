#include <stdio.h>

int main(void) {
    int n;
    short result = 1.0f;

    printf("Enter number: " );
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("%hd", result);

    
    return 0;
}
// short = 7
// int = 12
// long = 20
// long long = 20
// float = 34
// double = 170
// long double = 1754