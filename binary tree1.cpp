#include<iostream>
using namespace std;
struct node
{
    int value;
    node* left;
    node* right;
    node(int data)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};

int main(){
    struct node* root= new node(3);
    root->left= new node(1);
    root->right= new node(2);
    root->left->left= new node(4);
    root->right->right= new node(4);
    
       return 0;
}