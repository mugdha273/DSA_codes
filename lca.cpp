#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int value)
    {
        data = value;
        right = NULL;
        left = NULL;
    }
};

Node *lca(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *left = lca(root->left, n1, n2);
    Node *right = lca(root->right, n1, n2);

    if (left != NULL && right != NULL)
    {
        return root;
    }

    if (left == NULL && right == NULL)
    {
        return NULL;
    }

    return left != NULL ? left : right;
}
int main()
{
    Node *root = new Node(5);

    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->left = new Node(4);
    root->left->left->left->left = new Node(5);
    root->right = new Node(4);
    Node*ans= lca(root, 2, 4);
    cout << ans->data << endl;

    return 0;
}