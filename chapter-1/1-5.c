#include <stdio.h>

int main(void) {
    float celsius = 0.0;
    
    printf("celsius fahr\n");

    for (celsius = 300.0; celsius >= 0; celsius -= 20.0) {
        printf("%4.0f  %6.1f\n", celsius, celsius * (9.0 / 5.0) + 32.0);
    }

    return 0;
}
