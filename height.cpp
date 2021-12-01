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

// int height(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int k = height(root->left);
//     int f = height(root->right);
//     int check = max(k, f) + 1;
//     return check;
// }

// bool balancedtree(Node *root)
// {

//     if (root == NULL)
//     {
//         return true;
//     }
//     if (balancedtree(root->left) == false)
//     {
//         return false;
//     }
//     if (balancedtree(root->right) == false)
//     {
//         return false;
//     }
//     int a = height(root->left);
//     int b = height(root->right);

//     if (abs(a - b) <= 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->left->left = new Node(3);
//     // root->left->left->left = new Node(4);
//     // root->left->left->left = new Node(5);
//     root->right = new Node(4);

//     cout << balancedtree(root) << endl;

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



bool balancedtree(Node *root,int *height)
{
    int lh=0,rh=0;

    if (root == NULL)
    {
        return true;
    }
    if (balancedtree(root->left,&lh) == false)
    {
        return false;
    }
    if (balancedtree(root->right,&rh) == false)
    {
        return false;
    }
    *height=max(lh,rh)+1;

    if (abs(lh-rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->left = new Node(4);
    root->left->left->left = new Node(5);
    root->right = new Node(4);
    int height=0;
    cout << balancedtree(root,&height) << endl;

    return 0;
}