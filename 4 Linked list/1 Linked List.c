/*
Linked in implementation using C
Author ritesh
github- Being-Rts

*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;          //Data
    struct node *next; //self referencial pointer
} *first = NULL;

// Anode is created using struct which is containing data and next pointer
void create(int A[], int n)
{
    int i;
    struct node *t, *last; //created two pointers
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
}

void RecDisplay(struct node *p) //recursive display of items
{

    if (p != NULL)
    {
        printf("%d\t", p->data);
        RecDisplay(p->next);
    }
    else
    {
        printf("\n");
    }
}
int count(struct node *p) //It counts number of nodes in list
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return count(p->next) + 1; //recursive call of count
    }
}
/*int sum(struct node *p) //Iterative func to find sum
{
    int total = 0;
    while (p)
    {
        total = total + p->data;
        p = p->next;
    }
    return total;
}*/
int sum(struct node *p) //recursive way to find sum
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return sum(p->next) + p->data;
    }
}
int max(struct node *p) //Findng greatest value in linked list
{
    int max = 0;
    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
int min(struct node *p) //Findng greatest value in linked list
{
    if (!p)
    {
        return 0;
    }
    else
    {
        int min = p->data;
        while (p)
        {
            if (p->data <= min)
            {
                min = p->data;
            }
            p = p->next;
        }
        return min;
    }
}
int main()
{
    int A[] = {2, 3, 4, 5, 6, 7};
    create(A, 6); //passing array and its size as argument
    // Display(first);
    RecDisplay(first); //Display data Recursively
    printf("Total nodes in linked list are %d \n", count(first));
    printf("Sum of all elemets in LL is %d\n", sum(first));
    printf("Maximum element in LL is %d\n", max(first));
    printf("Minimum element in LL is %d\n", min(first));
    return 0;
}
