#include <stdio.h>
void fib(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        static int a = 0, b = 1, c;
        if (i == 0)
            printf("0 ");
        if (i == 1)
            printf("1 ");
        else
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}
int main()
{
    fib(10);
}