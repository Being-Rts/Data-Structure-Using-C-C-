#include <iostream>
using namespace std;
void merge(int A[], int B[], int C[], int x, int y)
{
    int i, j, k;
    for (i = 0; i < x; i++)
    {
        C[i] = A[i];
    }
    for (j = i, k = 0; j < x + y, k < y; j++, k++)
    {
        C[j] = B[k];
    }
}

int main()
{
    int A1[] = {1, 45, 32, 45};
    int A2[] = {33, 56, 34, 89, 90};
    int l1, l2;
    l1 = sizeof(A1) / sizeof(int);
    l2 = sizeof(A2) / sizeof(int);
    int A3[l1 + l2];
    merge(A1, A2, A3, l1, l2);
    for (int k = 0; k < (l1 + l2); k++)
    {
        cout << A3[k] << " ";
    }
    cout << "\n";
}
