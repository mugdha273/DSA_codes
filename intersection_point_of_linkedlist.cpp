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
void append(node *head1, int pos,node* head2)
{
    pos--;
    node *temp1 = head1;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node* temp2= head2;
    while (temp2->next!=NULL)
    {
       temp2= temp2->next;
    }
    temp2->next = temp1;
    
}
int length(node*&head)
{
    node*temp= head;
    int l=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;

}
bool intersection(node*&head1, node*&head2)
{
    node*ptr1= head1;
    node*ptr2=head2;
    int l1= length(head1);
    int l2= length(head2);
    int p= (l1-l2);
    node* temp1= head1;
    node* temp2= head2;
    bool t=0;
    while (p--)
    {
        temp1= temp1->next;
    }
    while (ptr1!=ptr2)
    {
        temp1= temp1->next;
        temp2= temp2->next;
        if (temp1->next==temp2->next)
        {
            t=1;
        }
        break;
        
    }
    if (t==1)
    {
        return 1;
    }
    return 0;

}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertatend(head1, 1);
    insertatend(head1, 2);
    insertatend(head1, 3);
    insertatend(head1, 4);
    insertatend(head1, 5);
    insertatend(head1, 6);
    print(head1);
    insertatend(head2, 9);
    insertatend(head2, 10);
    append(head1, 5,head2);
    print(head2);
    cout<<intersection(head1,head2)<<endl;

        return 0;
}