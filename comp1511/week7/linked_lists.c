#include <stdio.h>
#include <stdlib.h>

// this is 12 bytes 8 (int) + 4 (pointer)
struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data, struct node *next) {
    struct node *head = malloc(sizeof(struct node));

    head -> data = data;
    head -> next = next;
}

int main (void) {

    return 0;
}