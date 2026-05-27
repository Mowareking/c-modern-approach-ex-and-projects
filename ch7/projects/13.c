#include <stdio.h>

int main(void) {
    int count = 1;
    int sum = 0;
    float mean;
    char ch;

    printf("Enter sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            count++;
        }
        else {
            sum++;
        }
    }

    mean = (float) sum / count;

    printf("Average: %.1f", mean);
    
    return 0;
}