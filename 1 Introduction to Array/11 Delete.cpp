#include <iostream>
using namespace std;
int len;
class array
{
    int *p = new int[20];

public:
    array()
    {
        cout << "Array in Heap is Created \n Enter elements of array ";
        for (int i = 0; i < len; i++)
        {
            int element;
            cout << "enter element at index " << i << " ";
            cin >> element;
            p[i] = element;
        }
        cout << "\n";
    }
    void display()
    {
        cout << "Elements in array ";
        for (int i = 0; i < len; i++)
        {
            cout << p[i] << " ";
        }
    }
    void del(int index);
    ~array()
    {
        delete[] p;
        cout << "Heap Deallocated :)" << endl;
    }
};
void array::del(int index)
{
    if (index < len && index >= 0)
    {
        for (int i = index; i < len; i++)
        {
            p[i] = p[i + 1];
        }
    }
    else
    {
        cout << "Index not available" << endl;
    }
}
int main()
{
    int index;
    cout << "Enter length of array (*should be at most 20) " << endl;
    cin >> len;
    array a;
    a.display();
    cout << "Index to be deleted " << endl;
    cin >> index;
    a.del(index);
    a.display();
}