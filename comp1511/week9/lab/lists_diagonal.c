#include <stdio.h>
#include <stdlib.h>

// Do not edit these structs. You may use them exactly as
// they are but you cannot make changes to them

// A node in a linked list
struct node {
    int data;
    struct node *next;
};

// a list_node in a linked list. Each list_node
// contains a list of nodes.
struct list_node {
    struct node *my_list;
    struct list_node *next;
};

// Treat the linked lists like they're a 2D array
// and return 1 if the first element is repeated
// diagonally through the lists
int has_diagonal(struct list_node *head) {
    struct list_node *iterator = head;
    int size = 0;

    while (iterator != NULL) {
        size++;
        iterator = iterator->next;
    }

    iterator = head;

    int number = iterator->my_list->data;
    int i = 1;
    iterator = iterator->next;

    while (i < size) {
        int j = 0;
        while (j < i) {
            iterator->my_list = iterator->my_list->next;
            // printf("%d,", iterator->my_list->data);
            j++;
        }
        // putchar('\n');
        if (iterator->my_list->data != number) {
            return 0;
        }
        iterator = iterator->next;
        i++;
    }
    
    

    return 1;
}

// This helper function is for the main below and will
// have no effect on your has_diagonal. It does not
// need to be modified.
struct node *make_list(int a, int b, int c);

// This is a main function which could be used
// to test your has_diagonal function.
// It will not be marked.
// Only your has_diagonal function will be marked.
//
// It's recommended to change the int values in this
// main to test whether your has_diagonal is working.
int main(void) {
    struct list_node *head = malloc(sizeof (struct list_node));
    struct list_node *l = head;
    
    // create the first list
    l->my_list = make_list(5, 0, 0);
    
    // create the second list
    l->next = malloc(sizeof (struct list_node));
    l = l->next;
    l->my_list = make_list(0, 5, 0);
    
    // create the third list
    l->next = malloc(sizeof (struct list_node));
    l = l->next;
    l->my_list = make_list(0, 0, 5);
    l->next = NULL;
    
    printf("The result of has_diagonal is: %d\n", has_diagonal(head));
    
    return 0;
}

struct node *make_list(int a, int b, int c) {
    struct node *head = malloc(sizeof (struct node));
    struct node *n = head;
    n->data = a;
    n->next = malloc(sizeof (struct node));
    n = n->next;
    n->data = b;
    n->next = malloc(sizeof (struct node));
    n = n->next;
    n->data = c;
    n->next = NULL;
    
    return head;
}
