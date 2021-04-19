#include <iostream>
using namespace std;
int main()
{
    int **p;
    p = new int *[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int *p[i][j] = (5 + i + j);
        }
    }
}