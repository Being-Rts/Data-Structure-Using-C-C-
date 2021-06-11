#include <iostream>
using namespace std;
class diagonal
{
    int *A, size;

public:
    diagonal() //Constructor
    {
        cout << "Enter size of diagonal matrix" << endl;
        cin >> size;
        A = new int[size];
    }
    void set();
    void display();
    ~diagonal() //destructor
    {
        delete[] A;
    }
};
void diagonal::set()
{
    cout << "Enter Diagonal elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
}
void diagonal::display()
{
    cout << "***************" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                cout << A[i] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    diagonal d1;
    d1.set();
    d1.display();
}