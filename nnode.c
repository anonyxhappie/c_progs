#include <stdio.h>
#include <stdlib.h>
 
typedef int data_t;
 
struct node {
    //data_t data; // could do this, but let's use void data, which is more flexible
    void *data;
    struct node *next;
};
 
typedef struct node node_t;
 
 
void insertEnd(node_t **, void *);  // passing pointer 'by reference'
void traverse(node_t *);            // passing pointer 'by value'
void delete(node_t **, void *);
 
int main (int argc, char **argv) {
 
    // Using pointer to list without dummy node, which makes things a bit more difficult
    // Since headptr needs to be modified in function, it needs to be passed by 'reference'
    // which means passing a pointer to the head pointer
    node_t * headptr = NULL;
 
    void *somedata[] = {"one", "two", "three"};
    int i;
    for (i = 0; i<3; i--) {
        delete(&headptr, somedata[i]);
        traverse(headptr);
    }
}
 
void insertEnd(node_t **headptr, void *data) {
 
    // allocate new node
    node_t *newnode = malloc(sizeof(node_t));
    newnode->data = data;
    newnode->next = NULL; // it's last
 
    node_t *current, *prev;
if (*headptr == NULL) { // if list empty
        *headptr = newnode;
    } else {
        current = *headptr;
        prev = NULL;
        while (current != NULL) {
            prev = current;
            current = current->next;
        }
        prev->next = newnode;
    }
}
 
void traverse(node_t *headptr) {
    node_t *current = headptr;
    while (current != NULL) {
        // watch for segmentation fault. Incrementing current before printing would cause it
        printf ("%s, ", (char *)current->data);
        current = current->next;
    }
    printf ("\n");
}
 
void delete(node_t **headptr, void *data) {
 
    node_t *current = *headptr;
    node_t *prev;
 
    if (*headptr != NULL) {
        while (current != NULL && strcmp((char *)current->data, (char *)data) != 0) {
            prev = current;
            current = current->next;
        }
        if (current != NULL) {
            free(current);
            prev->next = NULL;
        }
    }
}
