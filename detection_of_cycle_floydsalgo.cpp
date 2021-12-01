#include <iostream>
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
void makecycle(node *head, int pos)
{
    node *temp = head;
    int count = 1;
    node *startnode;

    temp = head;
    while (temp->next != NULL)
    {

        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool check(node *&head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void removal(node *&head)
{
    node* start=head;
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            fast=start;
            break;
        }
    }
    while (fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }

    slow->next=NULL;
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
    makecycle(head, 2);
    cout << check(head) << endl;
    removal(head);
    print(head);

    return 0;
}

