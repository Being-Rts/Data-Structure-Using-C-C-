#include <iostream>
using namespace std;
void find_missing(int *ptr, int s)
{
    int A[s];
    for (int i = 0; i < s; i++)
    {
        int val = ptr[i];
        A[val] = 1;
    }
    for (int j = 0; j < s; j++)
    {
        if (A[j] == 0)
        {
            cout << j << " is missing" << endl;
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int *p = new int[size];
    cout << "Enter the elements in array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> *(p + i);
    }
    //Creation of Array
    find_missing(p, size);
}