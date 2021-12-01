#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next = NULL;
    }
};

void insertatend(Node* &head, int new_value)
{
    Node *n = new Node(new_value);
    if (head==NULL)
    {
        head=n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;

    }
    temp->next=n;
}
void print(Node* &head)
{
    Node*temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    
    cout<<" null"<<endl;
}
int main()
{
    Node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    print(head);

    return 0;
}

// #include <iostream>
// using namespace std;

// //node structure
// struct Node
// {
//     int data;
//     Node *next;
// };

// class LinkedList
// {
// private:
//     Node *head;

// public:
//     LinkedList()
//     {
//         head = NULL;
//     }

//     //Add new element at the end of the list
//     void push_back(int newElement)
//     {
//         Node *newNode = new Node();
//         newNode->data = newElement;
//         newNode->next = NULL;
//         if (head == NULL)
//         {
//             head = newNode;
//         }
//         else
//         {
//             Node *temp = head;
//             while (temp->next != NULL)
//                 temp = temp->next;
//             temp->next = newNode;
//         }
//     }

//     //display the content of the list
//     void PrintList()
//     {
//         Node *temp = head;
//         if (temp != NULL)
//         {
//             cout << "The list contains: ";
//             while (temp != NULL)
//             {
//                 cout << temp->data << " ";
//                 temp = temp->next;
//             }
//             cout << endl;
//         }
//         else
//         {
//             cout << "The list is empty.\n";
//         }
//     }
// };

// // test the code
// int main()
// {
//     LinkedList MyList;

//     //Add three elements at the end of the list.
//     MyList.push_back(10);
//     MyList.push_back(20);
//     MyList.push_back(30);
//     MyList.PrintList();

//     return 0;
// }