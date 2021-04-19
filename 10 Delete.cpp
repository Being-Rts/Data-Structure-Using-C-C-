#include <iostream>
using namespace std;
int *p = new int[10];
int ind;
void del(int ind)
{
    for (int k = ind; k < 10; k++)
    {
        p[k] = p[k + 1];
    }
}
void display()
{
    cout << "Array after deletion" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << p[i] << " ";
    }
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        p[i] = (i + 1) * 10;
    }
    cout << "Elements in array \n";
    for (int j = 0; j < 10; j++)
    {
        cout << p[j] << " ";
    }

    cout << "\n";
    cout << "Enter the index from which you want item to be deleted \n";
    cin >> ind;
    if (ind < 10 && ind >= 0)
    {
        del(ind);
        display();
    }
    else
    {
        cout << "Wrong Index entered" << endl;
    }
}