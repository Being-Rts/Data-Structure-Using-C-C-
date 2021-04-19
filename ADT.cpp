#include <iostream>
using namespace std;
int size;
class ADT
{
    int *A = new int[size];

public:
    ADT()
    {
        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
                A[i] = (i + 1) * 17;
            else
                A[i] = (i + 3) * 11;
        }
    }
    void Display();
    int Get(int index);
    void Set(int key, int index);
    int max();
    int min();
    int avg();
    ~ADT()
    {
        delete[] A;
        cout << "Process terminated" << endl;
    }
};
void ADT::Display()
{
    cout << "Elements in Array\n";
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}
int ADT::Get(int index)
{
    if (index < size && index >= 0)
        return A[index];
    return -1;
}
void ADT::Set(int key, int index)
{
    if (index < size && index >= 0)
    {
        A[index] = key;
        cout << key << " set successfullu at index " << index << endl;
    }
    else
        cout << "Enter proper Index you idiot\n";
}
int ADT::max()
{
    int max = A[0];
    for (int i = 0; i < size; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
int ADT::min()
{
    int min = A[0];
    for (int i = 0; i < size; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}

int main()
{
    cout << "Enter the size of array " << endl;
    cin >> size;
    ADT A;
    A.Display();
    cout << "Maximum element is " << A.max() << endl;
    cout << "Minimum element is " << A.min() << endl;
    A.Set(20, 20);
    A.Display();
}