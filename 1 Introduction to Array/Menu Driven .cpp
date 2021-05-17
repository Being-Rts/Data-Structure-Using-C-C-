#include <iostream>
using namespace std;
struct Arr
{
    int size;
    int *p;
};
void Insert(struct Arr A)
{
    cout << "Elements in Array " << endl;
    for (int i = 0; i < A.size; i++)
    {
        cin >> A.p[i];
    }
    cout << "You successfully inserted data in array\n";
}
int Search(struct Arr A)
{
    int key;
    cout << "Enter the key to search \n";
    cin >> key;
    for (int i = 0; i < A.size; i++)
    {
        if (A.p[i] == key)
        {
            cout << key << " found at index " << i << endl;
            return i;
        }
    }
    cout << key << " Not Found! Plaese check with another key \n";
    return -1;
}
void Display(struct Arr A)
{
    cout << "Displaying Array\n";
    for (int i = 0; i < A.size; i++)
    {
        cout << A.p[i] << " ";
    }
    cout << "\n";
}
void Delete(struct Arr A)
{
    int key;
    cout << "Enter exixting value to delete\n";
    cin >> key;
    int flag = 0, i;
    for (i = 0; i < A.size; i++)
    {
        if (A.p[i] == key)
        {
            flag++;
            break;
        }
        else
            continue;
    }
    if (flag == 0)
    {
        cout << "not available \n";
    }
    else
    {
        for (int j = i; j < A.size; j++)
        {
            A.p[j] = A.p[j + 1];
        }
        A.size--;
    }
}
int main()
{
    struct Arr A1;
    int ch, k;
    cout << "Enter size of array ";
    cin >> A1.size;
    A1.p = new int[A1.size];
    do
    {
        cout << "*****************************\n";
        cout << "1-> Insert" << endl;
        cout << "2-> Search" << endl;
        cout << "3-> Display" << endl;
        cout << "4-> Delete" << endl;
        cout << "0-> Quit" << endl;

        cout << "Enter Your Choice " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            Insert(A1);
            break;
        case 2:
            Search(A1);
            break;
        case 3:
            Display(A1);
            break;
        case 4:
            Delete(A1);
            break;
        default:
            cout << "Shutting Down! B'bye" << endl;
        }
    } while (ch > 0 && ch <= 4);
}