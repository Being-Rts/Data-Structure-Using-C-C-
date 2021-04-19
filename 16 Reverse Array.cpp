#include <iostream>
using namespace std;
int A[10];
class Arr
{
public:
    Arr()
    {
        cout << "enter the elements of Array "
             << " ";
        for (int i = 0; i < 10; i++)
        {
            cin >> A[i];
        }
    }
    void Display()
    {
        // cout << "Elements in array" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << A[i] << " ";
        }
    }
    void ReverseByCopying(); //Reverse array using Auxiliary array by copying
    void ReverseBySwapping();
};
void Arr::ReverseByCopying()
{
    cout << endl
         << "Reversing array using auxiliary array" << endl;
    int B[10];
    for (int j = 0, i = 9; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    for (int i = 0; i < 10; i++)
    {
        A[i] = B[i];
    }
}
void swap(int i, int j)
{

    int c = A[i];
    A[i] = A[j];
    A[j] = c;
}
void Arr::ReverseBySwapping()
{

    cout << endl
         << "Reversing array using Swap method" << endl;
    int i = 0, j = 9;
    while (i <= j)
    {

        swap(i, j);
        i++;
        j--;
    }
}
int main()
{
    Arr B;
    B.Display();
    B.ReverseByCopying();
    B.Display();
    B.ReverseBySwapping();
    B.Display();
}