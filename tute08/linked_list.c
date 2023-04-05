// Linked List Demo
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);

int main (void) {
    // how do we create a linked list
    struct node *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);



    // iterating through a linked list
    struct node *curr = head;
    while (curr != NULL){
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    // how to find the last element of the linked list
    struct node *curr = head;
    while (curr->next != NULL){
        printf("%d\n", curr->data);
        curr = curr->next;
    }
    struct node *last = curr;
    last->next = create_node(4);

    // inserting at head
    struct node *new_node = create_node(0);
    new_node->next = head;
    head = new_node;

    // update the value of curr in a while loop
    // inserting in middle
    new_node = create_node(1.5);
    new_node->next = curr->next;
    curr->next = new_node;

    // special cases
    // - empty list
    // - list of size 1
    // - list of other sizes

    // inserting into a linked list


}

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
