#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void push(int m)
    {
        node *n = new node(m);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "queue underflow" << endl;
            return;
        }
        node *todel = front;
        front=front->next;
        delete todel;
    }
    bool empty()
    {
        if (front==back)
        {
            return true;
        }
        return false;
        
    }
    int peek()
    {
        if (front==NULL)
        {
            cout << "nothing at top" << endl;
            return -1;
        }
        return front->data;
        
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout<< q.peek()<<endl;


    return 0;
}