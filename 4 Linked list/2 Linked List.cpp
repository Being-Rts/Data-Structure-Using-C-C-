#include <iostream>
#include <cstdlib>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
public:
    node *last;
    node *first = new node;
    LinkedList();
    void Display(node *p);
    void add_element();
    void search();
};
LinkedList::LinkedList() // constructor of Linked List
{

    node *t = new node;
    cout << "Enter first elemetnt- ";
    cin >> first->data;
    first->next = NULL; //setting up first node initially
    last = first;       //since oly one node is present so first will be last
    // first pointer will be pointing to first node only
    //we will keep track nodes using last node
    int n;
    do
    {
        cout << "press 1 to keep entering number\n ";
        cout << "Press 0 to stop Entering element in linked list\n";
        cin >> n;
        if (n == 1)
        {
            cout << "ENTER ELEMENT- ";
            cin >> t->data; //getting data in t->data
            t->next = NULL; //setting t->link=Null
            last->next = t; //assigning last->next to t
            last = t;       //setting last to newly added node;
        }

    } while (n != 0);
}
void LinkedList::Display(node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    LinkedList L1;
    L1.Display(L1.first);
    return 0;
}