#include <iostream>
using namespace std;
int len(string s)
{
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
void compare(string str1, string str2)
{
    if (len(str1) != len(str2))
    {
        cout << "\nBoth strings are not same " << endl;
    }
    if (len(str1) == len(str2))
    {
        int flag = 0;
        for (int i = 0; i < len(str1); i++)
        {
            if (str1[i] != str2[i])
            {
                flag = 1;
                cout << "\nBoth strings are not same " << endl;
                break;
            }
            else if (str1[i] = str2[i])
            {
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "\nBoth strings are same ;)" << endl;
        }
    }
}

int main()
{
    int len = 100;
    string str1, str2;

    cout << "Enter first String " << endl;
    getline(cin, str1);
    cout << "Enter second string " << endl;
    getline(cin, str2);
    compare(str1, str2);
}