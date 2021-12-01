#include <iostream>

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
              left = NULL;
              right = NULL;
       }
};
int search(int inorder[], int start, int end,int curr)
{
       for (int i = start; i < end; i++)
       {
              if (inorder[i] == curr)
              {
                     return i;
              }
       }
       return -1;
}

Node *make_tree(int preorder[], int inorder[], int start, int end)
{
       if (start>end)
       {
             return NULL;
       }
       
       static int idx = 0;
       int curr = preorder[idx];
       idx++;
       Node *node = new Node(curr);
       if (start == end)
       {
              return node;
       }

       
       int root = search(inorder, start, end,curr);
       node->left = make_tree(preorder, inorder, start, root - 1);
       node->right = make_tree(preorder, inorder, root + 1, end);
       return node;
}
void print_inorder(Node *root)
{
       if (root == NULL)
       {
              return;
       }
       print_inorder(root->left);
       cout << root->data << endl;
       print_inorder(root->right);
}

int main()
{
       int preorder[] = {1, 2, 3, 4, 5};
       int inorder[] = {4, 2, 1, 5, 3};
       Node*root = make_tree(preorder,inorder,0,4);
       print_inorder(root);


       return 0;
}