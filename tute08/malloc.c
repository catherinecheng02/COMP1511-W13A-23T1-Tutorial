// Malloc Revision
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
int main (void) {
    // malloc an int
    int *int_ptr = malloc(sizeof(int));
    *int_ptr = 3;
    // malloc a struct
    struct node *struct_ptr = malloc(sizeof(struct node));
    (*struct_ptr).data = 3;
    struct_ptr->next = NULL;
    

    // turn this into a create_node function?

}

struct node *create_node(int value) {
    struct node *struct_ptr = malloc(sizeof(struct node));
    (*struct_ptr).data = value;
    struct_ptr->next = NULL;
    return struct_ptr;
}




