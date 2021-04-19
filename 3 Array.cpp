// Increse size of Array
#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    for (int i = 0; i < 3; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    int *q = new int[10];
    for (int j = 0; j < 10; j++)
    {
        q[j] = p[j];
    }
    delete[] p;
    p = q;
    q = nullptr;
    p[9] = 12;
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
}