// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value)
//     {
//         data= value;
//     }

// };

// int reveal(Node* root)
// {
//     if (root==NULL)
//     {
//         return 0;
//     }

//     int k= reveal(root->left);
//     int f= reveal(root->right);
//     int check= max(k,f)+1;
//     return check ;
// }

// int main(){
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right= new Node(5);
//     root->right->left= new Node(6);
//     root->right->right = new Node(7);
//     cout<<reveal(root)<<endl;

//        return 0;
// }
// dia of binary tree

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

int height(Node *node)
{
       if (node == NULL)
       {
              return 0;
       }
       return 1 + max(height(node->left), height(node->right));
}

int calc(Node *root)
{
       if (root == NULL)
       {
              return 0;
       }
       int lcalc = calc(root->left);
       int rcalc = calc(root->right);

       int lheight = height(root->left);
       int rheight = height(root->right);

       return max(lheight + rheight + 1, max(lcalc, rcalc));
}

int main()
{
       Node *root = new Node(7);
       root->left = new Node(1);
       root->left->left = new Node(2);
       root->left->right = new Node(5);
       root->left->right->right = new Node(6);
       root->left->left->left = new Node(3);
       root->left->left->left->left = new Node(4);
       // root->left= new Node(2);
       // root->left->left= new Node(3);
       // root->left->left->left= new Node(4);
       // root->right= new Node(5);
       // root->right->right= new Node(6);
       // root->right->right->right= new Node(7);
       // root->right->right->right->right= new Node(8);
       cout << calc(root) << endl;

       return 0;
}