#include <iostream>
using namespace std;
int len;
int *A = new int[len];
bool isSorted()
{
    for (int i = 0; i < len - 2; i++)
    {
        if (A[i] > A[i + 1])
            return false;
    }
    return true;
}
void sort()
{
}
int main()
{
    cout << "Enter Size of array " << endl;
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cin >> A[i];
    }
    if (isSorted() == true)
    {
        cout << "Array is sorted ;)" << endl;
    }
    else if (isSorted() == false)
        cout << "not sorted";
}