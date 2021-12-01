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

// int countnodes(Node*root)
// {
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);
//     int count=1;
//     while (!q.empty())
//     {
//         if (root==NULL)
//         {
//             return -1;
//         }
        
//         Node* node= q.front();
//         q.pop();
        
//         if (node!=NULL)
//         {
//             if (node->left)
//             {
//                 q.push(node->left);
//                 count++;
//             }
//             if (node->right)
//             {
//                 q.push(node->right);
//                 count++;
//             }
            
//         }
//         else if (!q.empty())
//         {
//             q.push(NULL);
//         }
        
        
//     }
//     return count;
    
// }

// int main(){
//      Node *root = new Node(5);
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
//     cout<<countnodes(root)<<endl;
    
//        return 0;
// }
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

// int countnodes(Node*root)
// {
//     if (root==NULL)
//     {
//         return 0;
//     }
    
//     return countnodes(root->left)+countnodes(root->right)+1;
// }

// int main(){
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
//     cout<<countnodes(root)<<endl;
    
//        return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
        data= value;
    }

};

int countnodes(Node*root)
{
    if (root==NULL)
    {
        return 0;
    }
    
    return countnodes(root->left)+countnodes(root->right)+(root->data);
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right = new Node(7);
    cout<<countnodes(root)<<endl;
   
    
       return 0;
}