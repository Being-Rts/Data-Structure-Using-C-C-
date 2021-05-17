#include <iostream>
using namespace std;
int low = 0, high, size, mid;
class Array
{
    Array() //array creation
    {

        for (int i = 0; i < size; i++)
        {
            A[i] = (i + 1) * 2 + 3;
        }
    }
    int BinarySerach(int k)
    {
        mid = (low + high) / 2;
        if (A[mid] == k)
        {
        }
    }
};

int main()
{
    cout << "Enter size of array \n";
    cin >> size;
    high = size;
    int A[size];
    cout << "Enter key to search\n";
    cin >> key;
}