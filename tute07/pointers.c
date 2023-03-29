// Intro to pointers
// Written by Catherine Cheng z5310517
#include <stdio.h>
int main(void) {
    // Variable recap
    // Declaration of a variable
    int a; 
    
    // Initialisation of a variable
    a = 5;
   
    
    // What is a pointer?
    // variable that points to another variable
    // variable that stores an address of another variable
    
  
    // How do you declare a pointer?
    int *ptr;

    // How do you initialise a pointer? 
    ptr = &a; // int *ptr = &a;
    
    // When do we use "*"?
    // declare the pointer
    // dereferencing the pointer
    *ptr = 7;
    
    
    // How do we print the value that a pointer is pointing at?
    printf("%d\n", a);
    printf("%d\n", *ptr);
    // How do we print the memory address?
    printf("%p\n", &a);
    printf("%p\n", ptr);
}
