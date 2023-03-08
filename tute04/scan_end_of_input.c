// Scanning fixed number of inputs into array
// Written by Catherine Cheng (z5310517)

#include <stdio.h>
int main(void) {
    // we will write a program that will keep scanning in values until
    // the user presses CTRL + D
    int input;
    // int result = scanf("%d", &input);

    // while (result == 1) {
    //     printf("%d\n", input);
    //     result = scanf("%d", &input);
    // }

    //alternative
   

    while (scanf("%d", &input) == 1) {
        printf("%d\n", input);
    }

    /*
    // scanf return value
    int input_var;
    int var2;
    int result = scanf("%d %d", &input_var, &var2);
    printf("scanf return val = %d\n", result); // what will this print?
    */
    
    
}
