#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int m1, d1, y1, m2, d2, y2;
    bool first = false;
    
    printf("Enter first date: ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date: ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    first = (y1 < y2) || ((y1 == y2) && (m1 < m2)) || ((y1 == y2) && (m1 == m2) && (d1 < d2));

    if (first){
        printf("%d/%d/%.2d", m1, d1, y1);
    }
    else {
        printf("%d/%d/%.2d", m2, d2, y2);
    }

    return 0;    
}  