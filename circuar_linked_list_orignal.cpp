// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// void insertathead(node *&head, int value)
// {
//     node *temp = head;
//     node *n = new node(value);
//     if (head == NULL)
//     {
//         n->next = n;
//         head = n;
//         return;
//     }

//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->next = head;
//     head = n;
// }
// void insertatend(node *&head, int value)
// {

//     if (head == NULL)
//     {
//         insertathead(head, value);
//         return;
//     }
//     node *temp = head;
//     node *n = new node(value);
//     while (temp->next != head)
//     {
//         temp= temp->next;
//     }
//     temp->next = n;
//     n->next = head;
// }
// void print(node *head)
// {
//     node *temp = head;
//     do
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     } while (temp != head);
//     cout << "NULL" << endl;
// }

// int main()
// {
//     //ok cool
//     node *head = NULL;

//     insertatend(head, 1);
//     insertatend(head, 2);
//     insertatend(head, 3);
//     // insertatend(head, 4);
//     print(head);
//     insertathead(head, 5);
//     print(head);
//     return 0;
// }

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
void insertathead(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        n->next = n;
        return;
    }
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertatend(node *&head, int value)
{
    if (head == NULL)
    {
        insertathead(head, value);
        return;
    }
    node *n = new node(value);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void print(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;

    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    print(head);
    insertathead(head, 5);
    print(head);
    return 0;

    return 0;
}