#include <stdio.h>
#include <stdlib.h>
struct Arr
{
    int A[10];
    int len;
    int size;
};
int isSorted(struct Arr a)
{
    int i;
    for (i = 0; i < a.len; i++)
    {
        if (a.A[i] > a.A[i + 1])
            return 0;
    }
    return 1;
}
int main()
{
    struct Arr A1 = {{1, 2, 3, 4, 5, 7, 6}, 10, 8};

    if (isSorted(A1) == 1)
        printf("Array is sorted\n");
    printf("Array is not sorted\n");
    printf("%ld", sizeof(A1.A) / sizeof(int));
}