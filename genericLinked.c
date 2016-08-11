/* Generic Linked List in C
 * Unlike C++ and Java, C doesn’t support generics. 
 * How to create a linked list in C that can be used for any data type? 
 * In C, we can use void pointer and function pointer to implement the same functionality. 
 * The great thing about void pointer is it can be used to point to any data type. 
 * Also, size of all types of pointers is always is same, so we can always allocate a linked list node. 
 * Function pointer is needed process actual content stored at address pointed by void pointer.
 **/
#include<stdio.h>
#include<stdlib.h>
 
/* A linked list node */
struct node
{
    // Any data type can be stored in this node
    void  *data;
 
    struct node *next;
};
 
/* Function to add a node at the beginning of Linked List.
   This function expects a pointer to the data to be added
   and size of the data type */
void push(struct node** head_ref, void *new_data, size_t data_size)
{
    // Allocate memory for node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
 
    new_node->data  = malloc(data_size);
    new_node->next = (*head_ref);
 
    // Copy contents of new_data to newly allocated memory.
    // Assumption: char takes 1 byte.
    int i;
    for (i=0; i<data_size; i++)
        *(char *)(new_node->data + i) = *(char *)(new_data + i);
 
    // Change head pointer as new node is added at the beginning
    (*head_ref)    = new_node;
}
 
/* Function to print nodes in a given linked list. fpitr is used
   to access the function to be used for printing current node data.
   Note that different data types need different specifier in printf() */
void printList(struct node *node, void (*fptr)(void *))
{
    while (node != NULL)
    {
        (*fptr)(node->data);
        node = node->next;
    }
}
 
// Function to print an integer
void printInt(void *n)
{
   printf(" %d", *(int *)n);
}
 
// Function to print a float
void printFloat(void *f)
{
   printf(" %f", *(float *)f);
}
 
/* Driver program to test above function */
int main()
{
    struct node *start = NULL;
 
    // Create and print an int linked list
    unsigned int_size = sizeof(int);
    int arr[] = {10, 20, 30, 40, 50}, i;
    for (i=4; i>=0; i--)
       push(&start, &arr[i], int_size);
    printf("Created integer linked list is \n");
    printList(start, printInt);
 
    // Create and print a float linked list
    unsigned float_size = sizeof(float);
    start = NULL;
    float arr2[] = {10.1, 20.2, 30.3, 40.4, 50.5};
    for (i=4; i>=0; i--)
       push(&start, &arr2[i], float_size);
    printf("\n\nCreated float linked list is \n");
    printList(start, printFloat);
 
    return 0;
}
