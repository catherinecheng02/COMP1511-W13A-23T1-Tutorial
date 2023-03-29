#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {
    // how can we change this to print line by line
    char my_var[MAX_LETTERS];
    while (fgets(my_var, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", my_var);
    }

    return 0;
}
