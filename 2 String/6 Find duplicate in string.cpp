#include <iostream>
using namespace std;
void check_duplicacy(string s)
{
    int arr[26] = {0}; //an array of size 26 to mark availability size[0..25] represents [a-z]

    for (int i = 0; s[i] != '\0'; i++)
    {
        arr[s[i] - 97]++; //increament value at index s[i]-97
        // by increasing value at some index we mark it as presense
    }
    for (int j = 0; j <= 25; j++)
    {
        if (arr[j] > 1)
        {
            cout << char(j + 97) << " appeared " << arr[j] << " times" << endl;
        }
    }
}
int main()
{
    string s;
    cout << "Enter the string (lower case for accurate result " << endl;
    getline(cin, s);
    check_duplicacy(s);
}