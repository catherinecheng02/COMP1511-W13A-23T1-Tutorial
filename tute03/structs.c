// Struct demo
// Written by Catherine Cheng 01-03-2023
#include <stdio.h>

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {
    int num;
    num = 5;

    struct person catherine;
    catherine.shoe_size = 36;
    catherine.first_name_initial = 'c';
    printf("%d\n", catherine.shoe_size);

    
    

    return 0;
}
