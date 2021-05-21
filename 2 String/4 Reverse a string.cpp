#include <iostream>
using namespace std;
string rev(string s)
{
    string e = ""; //empty string
    for (int i = 0; s[i] != '\0'; i++)
    {
        e = s[i] + e;
        // cout << e << endl;
    }

    return e;
}
int main()
{
    string str;
    cout << "Enter a string to reverse " << endl;
    cin >> str;
    cout << str << "  has now become  " << rev(str) << endl;
}