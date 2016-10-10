#include <stdio.h>

int main(void) {
    float celsius = 0.0, fahr = 0.0;
    int lower = 0, upper = 100, step = 4;

    celsius = lower;

    printf("celsius fahr\n");

    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;

        printf("%4.0f  %6.1f\n", celsius, fahr);

        celsius = celsius + step;
    }

    return 0;
}
