#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        right = NULL;
        left = NULL;
    }
};
void flatten(Node *root)
{

    if (root == NULL || root->left == NULL || root->right == NULL)
    {
        return;
    }
    if (root->left != NULL)
    {
        Node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node *t = root->right;

        while (t->right != NULL)
        {
            t = t->right;
        }

        t->right = temp;
    }

    flatten(root->right);
}

void printinorder(Node*root)
{
    if (root==NULL)
    {
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
    
}
int main()
{
    struct Node *root;
    root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->right = new Node(8);

    root->right = new Node(3);
    root->right->right = new Node(7);
    root->right->left = new Node(6);

    return 0;
}