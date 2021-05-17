#include <iostream>
using namespace std;
int A[] = {2, 3, 4, 5, 7, 11, 23, 44, 56, 77, 87, 98, 99, 100};
void BinarySearch()
{
    int key;
    int low = 0, high = (sizeof(A) / sizeof(int));
    cout << "Enter Key to search\n ";
    cin >> key;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
        {
            cout << "found at " << mid << endl;
            break;
        }
        else if (A[mid] < key)
        {
            low = mid + 1;
        }
        else if (A[mid] > key)
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        cout << "Not found\n";
    }
}
int main()
{
    BinarySearch();
}
