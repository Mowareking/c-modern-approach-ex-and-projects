#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    short sum = 0;
    
    printf("Enter a sentence: ");
    
    while (ch != '\n') {
        ch = getchar();
        ch = toupper(ch);
        
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U': sum += 1; break;
        }
    }

    printf("Vowels: %hd", sum);
}