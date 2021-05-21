#include <iostream>
using namespace std;
void fun(int *ptr)
{
    for (int i = 0; i < 7; i++)
    {
        *ptr = *ptr * 10;
        cout << *ptr << " " << ptr << endl;
        ptr++;
    }
}
int main()
{
    int s[] = {1, 2, 3, 4, 5, 6, 7};
    int *p;
    p = &s[0];
    fun(p);
}