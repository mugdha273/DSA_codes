#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

Node *insertBST(Node *root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }

    if (value < root->data)
    {
        root->left = insertBST(root->left, value);
    }

    else
    {
        root->right = insertBST(root->right, value);
    }

    return root;
}

void printInorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printInorder(root->left);
    cout << root->data<<" ";
    printInorder(root->right);
}

int main()
{
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);

    printInorder(root);
    cout<<endl;

    return 0;
}