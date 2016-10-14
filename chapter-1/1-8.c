#include <stdio.h>

int main(void) {
    int c = 0;
    long int blanks = 0, tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF) {
        if (' ' == c) {
            ++blanks;
        } else if ('\t' == c) {
            ++tabs;
        } else if ('\n' == c) {
            ++newlines;
        }
    }

    printf("blanks: %ld\n", blanks);
    printf("tabs: %ld\n", tabs);
    printf("newlines: %ld\n", newlines);

    return 0;
}
