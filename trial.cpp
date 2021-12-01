#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int val;
	Node *next;
	Node(int data)
	{
		val = data;
		next = nullptr;
	}
};

void insertathead(Node *&head, int data)
{
	Node *n = new Node(data);
	if (head == nullptr)
	{
		head = n;
		return;
	}

	n->next=head;
	head=n;
}

void insertatend(Node* &head, int data)
{
	Node *n = new Node(data);
	if (head == nullptr)
	{
		head = n;
		return;
	}
	Node*temp=head;
	while (temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;

}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->val << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	Node *head = nullptr;
	insertatend(head, 1);
	insertatend(head, 2);
	insertatend(head, 3);
	insertatend(head, 4);
	insertatend(head, 5);
	print(head);

	return 0;
}
