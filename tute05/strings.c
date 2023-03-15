// String demo
// Written by Catherine Cheng z5310517
#include <stdio.h>
int main(void) {
    //  what is a string?
    // - array of characters
    //  how do we declare and initialise a string?
    char string1[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // null terminating character
    char string2[] = "hello";
    // how do we scan
    char dest_string[100];
    fgets(dest_string, 100, stdin);
    //  how do we print a string?
    printf("%s\n", string2);
    //  how do we loop through a string?
    int i = 0;
    while (string[i]!= '\0') {

        i++;
    }

}
