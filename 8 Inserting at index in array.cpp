#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 4, 6, 7, 53, 33};
    int length = sizeof(A) / sizeof(int);
    cout << "Elements presents in array " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int index, value;
    cout << "Enter the index at which you want to insert a value" << endl;
    cin >> index;
    cout << "Enter the valuethat you want to insert at index  " << index << endl;
    cin >> value;
    for (int i = length; i > index; i--)
    {
        A[i] = A[i - 1];
    }
    A[index] = value;
    length = sizeof(A) / sizeof(int (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
}