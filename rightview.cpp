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
        data = value;
    }
};

void levelorder(Node *root)
{
    vector<int> vect(0);
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int i = 1;
    cout << root->data << " ";
    while (!q.empty())
    {
        Node *node = q.front();

        q.pop();

        if (node != NULL)
        {
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        // if (q.front() == NULL)
        // {
        //     cout << q.back() << " ";
        // }
        else if (!q.empty())
        {
            Node *rec = q.front();
            cout << rec->data << " ";
            q.push(NULL);
            i++;
        }
    }
}

// int rightview(Node*root)
// {
//     return root->right->data;
// }

int main()
{
    Node *root = new Node(1);
    root->left= new Node(2);
    root->left->left= new Node(7);
    root->left->left->right= new Node(8);
    root->left->left->right->left= new Node(9);
    root->right= new Node(3);
    root->right->left= new Node(4);
    root->right->left->left= new Node(5);
    
    levelorder(root);

    return 0;
}