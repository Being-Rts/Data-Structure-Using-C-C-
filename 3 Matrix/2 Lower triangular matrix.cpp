#include <iostream>
using namespace std;
class lower
{
    int *A, size_of_array, size_of_matrix;

public:
    lower() //constructor
    {
        cout << "Enter the size of lower tringular  matrix" << endl;
        cin >> size_of_matrix;

        /*In lower triangular matrix number of non zero elements=n(n+1)/2
        Number of zeros=n(n-1)/2
        A[i][j]=0 iff j>i
        So we only store non zero elemets in a 1D array to save memory
        */
        size_of_array = size_of_matrix * (size_of_matrix + 1) / 2;
        A = new int[size_of_array];
    }
    void set();
    void display();
    ~lower()
    {
        delete[] A;
    }
};
void lower ::set()
{
    cout << "Enter the elements of lower triangular matrix of size " << size_of_matrix << endl;
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> A[i];
    }
    //storing value in row major order
}
void lower::display()
{
    for (int i = 1; i <= size_of_matrix; i++)
    {
        for (int j = 1; j <= size_of_matrix; j++)
        {
            if (i >= j)
            {
                int index = (i * (i - 1) / 2) + (j - 1);
                cout << A[index] << " ";
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
    lower matrix1;
    matrix1.set();
    matrix1.display();
}