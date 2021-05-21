#include <iostream>
using namespace std;
// ANAGRAM : when two string or word of same length contains same letter in with equal occurance
// e.g EAT & TEA, chin & inch
void verify(int a[26])
{
    int flag = 0;
    for (int j = 0; j < 26; j++)
    {
        if (a[j] > 0)
        {
            cout << "Not anagram" << endl;
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Yes! Anagram" << endl;
    }
}
void anagram(string s1, string s2)
{
    int arr[26] = {0}; //an array of size 26 to mark availability size[0..25] represents [a-z]

    for (int i = 0; s1[i] != '\0'; i++)
    {
        arr[s1[i] - 97]++; //increament value at index s[i]-97 as marking
    }
    for (int i = 0; s1[i] != '\0'; i++)
    {
        arr[s2[i] - 97]--; //Decrement to establize array to original
        //if anagram then array will become asoriginal else there will be change
    }
    verify(arr);
}
int main()
{
    string str1, str2;
    cout << "Enter two strings to find wheater it is ANAGRAM or not" << endl;
    getline(cin, str1);
    getline(cin, str2);
    anagram(str1, str2);
}
