#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertatend(node *&head, int value)
{
    node *n = new node(value);

    if (head == NULL)
    {
        insertathead(head, value);
        return;
        // head = n;
        // return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void deleteathead(node*&head)
{
    node*n= head;
    head= head->next;
    head->prev= NULL;
    delete n;


}
void deletenode(node *&head, int pos)
{
    int count = 1;
    node *temp = head;
    while (count != pos && temp != NULL)
    {
        temp->prev = temp;
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}

void print(node *&head)
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
    insertatend(head, 7);
    insertatend(head, 8);
    insertatend(head, 9);
    print(head);
    deletenode(head, 3);
    print(head);
    deleteathead(head);
    print(head);

    return 0;
}