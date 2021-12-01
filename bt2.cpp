// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int value)
//     {
//         data = value;
//         right = NULL;
//         left = NULL;
//     }
// };

// void preorder(struct node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder_traversal(struct node * root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder_traversal(root->left);
//     cout << root->data << " ";
//     inorder_traversal(root->right);

// }
// void postorder_traversal(struct node * root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder_traversal(root->left);
//     postorder_traversal(root->right);
//     cout << root->data << " ";
    

// }


// int main()
// {
//     struct node *root;
//     root = new node(1);
//     root->left = new node(2);
//     root->left->left = new node(4);
//     root->left->right = new node(7);

//     root->right = new node(3);
//     root->right->right = new node(5);
//     root->right->left = new node(6);
//     preorder(root);
//     cout<<endl;
//     inorder_traversal(root);
//     cout<<endl;
//     postorder_traversal(root);


//     return 0;
// }

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        right = NULL;
        left = NULL;
    }
};

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
// void inorder_traversal(struct node * root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder_traversal(root->left);
//     cout << root->data << " ";
//     inorder_traversal(root->right);

// }
// void postorder_traversal(struct node * root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder_traversal(root->left);
//     postorder_traversal(root->right);
//     cout << root->data << " ";
    

// }


int main()
{
    struct node *root;
    root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->left->right = new node(8);

    root->right = new node(3);
    root->right->right = new node(7);
    root->right->left = new node(6);
    preorder(root);
    cout<<endl;
    


    return 0;
}