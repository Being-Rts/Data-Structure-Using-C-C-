#include <iostream>
using namespace std;
void setArray(int *A, int len)
{
    cout << "Insert data in array\n";
    for (int i = 0; i < len; i++)
    {
        cin >> *(A + i);
    }
}
void Display(int *A, int len)
{
    cout << "Elements in Array ";
    for (int i = 0; i < len; i++)
    {
        cout << *(A + i) << " ";
    }
}
void uni(int *A, int *B,int *C,int a,int b) // Performing union of two array
{
    int i, j, k=0;
    for (; i < a;i++) 
    {
        C[i] = *(A + i); //copying element of first array
    }
    for (;j<a;j++)
    {
        int x = *(B + j);
        for (k; k < a; k++)
        {
            if (C[k]==x)
                break;
        }
    }
}
void intersection(int *a, int *b)
{
}
int main()
{
    int len1, len2;
    cout << "Enter the length of Array-> \n";
    cin >> len1;
    int A[len1];
    setArray(A, len1);
    cout << "Enter the length of second  Array-> \n";
    cin >> len2;
    int B[len2];
    setArray(A, len2);
    int C[len1 + len2];
}