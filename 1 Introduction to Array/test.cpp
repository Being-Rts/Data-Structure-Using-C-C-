#include <iostream>
using namespace std;
void D(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int A[5] = {2, 3, 8, 6, 7};
    int B[4] = {7, 3, 9, 5};
    int C[9], i;
    for (i = 0; i < 5; i++)
    {
        C[i] = A[i];
    }
    D(C);
    for (int j = 0; j < 4; j++)
    {
        int flag = 0;
        int x = B[j];
        for (int k = 0; k < 5; k++)
        {

            if (C[k] == x)
                flag++;
        }
        if (flag == 0)
        {
            C[i] = x;
            i++;
        }
    }
    cout << "\n";
    D(C);
}