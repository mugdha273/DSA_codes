// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int value)
//     {
//         left = NULL;
//         right = NULL;
//         data = value;
//     }
// };

// int sum(Node *root, int g)
// {
//     if (root->left||root->right == NULL)
//     {
//         return 0;
//     }

//     int lcalc = sum(root->left, root->left->data);
//     int rcalc = sum(root->right, root->right->data);
//     root->data = lcalc + rcalc;
//     cout << root->data << endl;
//     return root->data;
// }

// int main()
// {
//     Node *root = new Node(7);
//     root->left = new Node(1);
//     root->left->left = new Node(2);
//     root->left->right = new Node(5);
//     root->left->right->right = new Node(6);
//     root->left->left->left = new Node(3);
//     root->left->left->left->left = new Node(4);
//     cout<<sum(root,root->data)<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        left = NULL;
        right = NULL;
        data = value;
    }
};

void sum(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    sum(root->left);
    sum(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }

    cout<<root->data<<endl;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    sum(root);


    return 0;
}