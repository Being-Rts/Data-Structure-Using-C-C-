#include <iostream>
using namespace std;
int main()
{
    // ASCII of a=97, A=65
    char A[] = "WELCOME";
    // difference between a & A=32
    int i;
    for (i = 0; A[i] != 0; i++)
    {
        A[i] = A[i] + 32;
    }
    cout << "Case has been changed -  " << A << endl;
}