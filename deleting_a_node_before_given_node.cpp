// deletion of node before a given element
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        cout << "Enter data: ";
        cin >> data;
        next = NULL;
    }
};

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    Node *start = NULL;
    Node *ptr = start;
    Node *preptr = ptr;
    Node *temp = ptr;
    for (int i = 0; i < n; i++)
    {
        Node *newnode = new Node();
        if (start == NULL)
        {
            start = newnode;
            ptr = newnode;
        }
        else
        {
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    // ptr = start;
    int a;
    cout << "Enter element to delete a node before: ";
    cin >> a;
    Node* p=start;
    if (ptr == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        
        while (p->data != a)
        {
            temp = preptr;
            preptr = p;
            p = p->next;
        }if (p==start){
            cout<<"no data before "<<a<<" \n";
        }
        else if (preptr==start)
        {
            start=p;
            delete preptr;
        }
        else{
            temp->next = p;
            delete preptr;
        }
        
    }
    Node *ptr2=start;
    cout<<"\n updated linked list ";
    while (ptr2 != NULL)
    {
        cout << ptr2->data << endl;
        ptr2 = ptr2->next;
    }
    return 0;
}