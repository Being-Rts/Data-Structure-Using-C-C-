#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;          // Data part of  node
    struct node *link; // Link part that contains link of a node
};
int main()
{
    struct node *head = malloc(sizeof(struct node)); // I created a head pointer
    head->data = 12;
    head->link = NULL;
    printf("%d \n", head->data);
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 23;
    printf("%d ", ptr->data);
    head->link = ptr;
    printf("\n%d", head->link->data);
    return 0;
}