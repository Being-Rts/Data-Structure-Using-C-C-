#include <iostream>
using namespace std;
int *A = new int[20];
int len;
class Arr
{
public:
    Arr(int len) //constructor
    {
        cout << "Enter Elements of array ";
        for (int i = 0; i < len; i++)
        {
            int data;
            cin >> data;
            A[i] = data;
        }
    }
    void Append(int value);
    void Display();
    ~Arr() //Destructor
    {
        cout << "Process Terminated Safely \n";
    }
};

void Arr::Append(int value)
{
    A[len] = value;
    len++;
}
void Arr::Display()
{
    for (int i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int a;
    cout << "Enter the length \n";
    cin >> a;
    if (a < 20 && a >= 0)
    {
        len = a;
        Arr A(len);
        A.Display();
        A.Append(55);
        A.Display();
        A.Append(54);
        A.Display();
        A.Append(734);
        A.Display();
    }
    else
    {
        cout << "Enter proper length you Idiot \n";
    }
}
