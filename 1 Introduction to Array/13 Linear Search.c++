#include <iostream>
using namespace std;
int A[] = {22, 32, 43, 56, 35, 66, 76, 886, 866, 876, 0, 654, 668};
int len = sizeof(A) / sizeof(int);
int search(int key)
{
    for (int i = 0; i < len; i++)
    {
        if (A[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int key, index;
    int len = sizeof(A) / sizeof(int);
    cout << "Enter Key to search " << endl;
    cin >> key;
    if (search(key) == -1)
        cout << "Not Found Boss " << endl;
    else
        cout << "found " << key << " at " << search(key) << "th index" << endl;
}