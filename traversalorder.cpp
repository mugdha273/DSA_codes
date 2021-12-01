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
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };

// void levelorder(Node *root)
// {
//     if (root == NULL)
//     {
//         cout<<"aapne hamein bulaya kya?"<<endl;
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node *node = q.front();
//         q.pop();
//         if (node != NULL)
//         {
//             cout << node->data << " ";
//             if (node->left)
//             {
//                 q.push(node->left);
//             }
//             if (node->right)
//             {
//                 q.push(node->right);
//             }
//         }
//         else if (!q.empty())
//         {
//             q.push(NULL);
//         }
//         }
// }

// int main()
// {
//     Node *root = new Node(5);
//     root->left = new Node(6);
//     root->right = new Node(3);
//     root->left->left = new Node(9);
//     root->left->right= new Node(1);
//     root->left->right->left= new Node(2);
//     root->left->right->left->left= new Node(3);
//     root->left->right->left->right= new Node(5);
//     root->right->left= new Node(2);
//     root->right->right= new Node(1);
//     root->right->left->right= new Node(6);
//     root->right->left->right->right= new Node(7);
//     levelorder(root);
//     cout<<endl;

//     return 0;
// }
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

int sumofkthlevel(int k, Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int i = 0;
    int ans = 0;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)
        {
            if (i == k)
            {
                ans += node->data;
            }
            //  cout<<node->data<<endl;

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
            {
                q.push(NULL);
                i++;
            }
    }
    return ans;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(3);
    root->left->left = new Node(9);
    root->left->right = new Node(1);
    root->left->right->left = new Node(2);
    root->left->right->left->left = new Node(3);
    root->left->right->left->right = new Node(5);
    root->right->left = new Node(2);
    root->right->right = new Node(1);
    root->right->left->right = new Node(6);
    root->right->left->right->right = new Node(7);
    cout << sumofkthlevel(2, root) << endl;
    ;

    return 0;
}