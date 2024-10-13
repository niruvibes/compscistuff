// Create a list from Command Line Arguments
// list_create.c
//
// This program was written by neil NAME (z5592479)
// on 25.07.24
//
// A program which creates and prints a linked list 
// from command line arguments!

#include <stdio.h>
#include <stdlib.h>

struct node {
    char *data;
    struct node *next;
};

struct node *arguments_to_list(int argc, char *argv[]);
void free_list(struct node *head);
void print_list(struct node *head);

int main(int argc, char **argv) {
    struct node *head = arguments_to_list(argc, argv);
    print_list(head);
    free_list(head);

    return 0;
}

// Create linked list from argument values
struct node *arguments_to_list(int argc, char *argv[]) { 
    struct node *head = NULL;

    int i = argc - 1;

    while (i > 0) {
        struct node *p = malloc(sizeof(struct node));
        p->next = head;
        p->data = argv[i];
        head = p;
        i--;
    }
    
    return head;
}

// Free the linked list from memory
void free_list(struct node *head) {
    struct node *p = head;

    while (p != NULL) {
        struct node *next = p->next;
        free(p);
        p = next;
    }
}

// Print the values of the linked list
void print_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%s -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}