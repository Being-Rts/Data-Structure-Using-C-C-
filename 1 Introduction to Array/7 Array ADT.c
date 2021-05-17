#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size, length;
};
void Display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int main()
{
    struct Array arr;
    int n, i;
    printf("Enter Size of Array \n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int)); //declaring array in heap
    arr.length = 0;
    printf("Enter number of numbers \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    Display(arr);
}