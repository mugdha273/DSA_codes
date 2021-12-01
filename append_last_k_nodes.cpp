#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    int data;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
int length (node*&head)
{
    int l=0;
    node* temp= head;
    while (temp!=NULL)
    {
        temp= temp->next;
        l++;
    }
    return l;
}
node* appendk(node *&head, int k)
{
    int l= length(head);
    int count=1;
    node* newtail;
    node*tail= head;
    node* newhead;

    while (tail->next!=NULL)
    {
        if (count==l-k)
        {
            newtail= tail;
        }
        if (count==l-k+1)
        {
            newhead = tail;
        }
        tail= tail->next;
        count++;
        
    }
    newtail->next= NULL;
    tail->next= head;
    return newhead ; 
    
    
}
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
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    insertatend(head, 6);
    
    print(head);
    
    node*newhead= appendk(head,3);
    print(newhead);

    return 0;

    return 0;
}