#include <iostream>
using namespace std;
int main()
{
    int A[3][3] = {{1, 2, 3}, {5, 6, 7}, {7, 9, 8}}; // array declared in stack
    cout << "Array A data in Stack " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
    }
    cout << "\n";
    int *B[3];         // Array of pointer
    B[0] = new int[3]; // Decaration of array in heap
    B[1] = new int[3];
    B[2] = new int[3];
    cout << "Array B data in Heap" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
    }
    cout << "\n";
    int **C;
    C = new int *[3];
    C[0] = new int[3];
    C[1] = new int[3];
    C[2] = new int[3];
    cout << "Array C \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
    }
    return 0;
}