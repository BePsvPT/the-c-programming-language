#include <stdio.h>

#define ON 1
#define OFF 0

int main(void) {
    int c = 0, flag = ON;

    while ((c = getchar()) != EOF) {
        if (' ' != c) {
            putchar(c);

            flag = ON;
        } else if (ON == flag) {
            putchar(c);

            flag = OFF;
        }
    }

    return 0;
}
