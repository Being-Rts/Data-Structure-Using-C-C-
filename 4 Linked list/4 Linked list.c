#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("\n");
}
int main()
{
    struct node *ptr, *last;
    struct node *first = malloc(sizeof(struct node));
    int i = 0, size, first_data;

    printf("Enter the size of Linked list\n");
    scanf("%d", &size);
    printf("Enter first element\n"); //creating first node
    scanf("%d", &first_data);
    first->data = first_data;
    first->link = NULL;
    last = first; //assigning last pointer
    printf("Enter rest elements of linked list\n");

    for (i; i < size - 1; i++)
    {
        struct node *ptr = malloc(sizeof(struct node));
        int val;
        scanf("%d", &val);
        ptr->data = val;
        ptr->link = NULL;
        last->link = ptr;
        last = ptr;
    }
    display(first);
    return 0;
}
