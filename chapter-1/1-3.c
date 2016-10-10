#include <stdio.h>

int main(void) {
    float fahr = 0.0, celsius = 0.0;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;

    printf("fahr celsius\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);

        printf("%3.0f  %6.1f\n", fahr, celsius);

        fahr = fahr + step;
    }

    return 0;
}
