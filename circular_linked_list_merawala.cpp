#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertatend(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}
void makecircular (node* &head)
{
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next= head;
    
}
void insertathead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    head = n;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    //ok cool
    node *head = NULL;

    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    insertatend(head, 6);
    insertatend(head, 7);
    insertatend(head, 8);
    makecircular (head);
    print(head);
    return 0;
}