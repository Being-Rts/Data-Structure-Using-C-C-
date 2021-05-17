#include <iostream>
using namespace std;
void Display(int A[])
{
    int len = sizeof(A) / sizeof(int);
    cout << "Elements in Array are " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }
}
void append(int A[], int x)
{
    int len = sizeof(A) / sizeof(int);
    A[len] = x;
}
int main()
{
    int A[] = {1, 2, 3, 4};
    append(A, 32);
    Display(A);
}