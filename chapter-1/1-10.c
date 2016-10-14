#include <stdio.h>

int main(void) {
    int c = 0;

    while ((c = getchar()) != EOF) {
        if ('\t' == c) {
            printf("\\t");
        } else if ('\b' == c) {
            printf("\\b");
        } else if ('\\' == c) {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }

    return 0;
}
