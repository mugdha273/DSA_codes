// #include <bits/stdc++.h>
// using namespace std;
// class queue_using_stack
// {
// public:
//     stack<int> st1;
//     stack<int> st2;
//     void push(int x)
//     {
//         st1.push(x);
//     }
//     int pop()
//     {
//         if (st1.empty() && st2.empty())
//         {
//             cout << "limit has reached" << endl;
//             return -1;
//         }
//         if (st2.empty())
//         {
//             while (!st1.empty())
//             {
//                 int a = st1.top();
//                 st2.push(a);
//                 st1.pop();
//             }

//         }
//         int topvalue= st2.top();
//             st2.pop();
//             return topvalue;
//     }
//     int top()
//     {
//         if (st1.empty())
//         {
//             cout << "no element" << endl;
//             return -1;
//         }

//         return st1.top();
//     }
//     int ttop()
//     {
//         if (st2.empty())
//         {
//             cout << "no element" << endl;
//             return -1;
//         }

//         return st2.top();
//     }
//     bool empty()
//     {
//         if(st1.empty() && st2.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()
// {
//     queue_using_stack q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     // cout << q.top() << endl;
//     // cout << q.ttop() << endl;
//     return 0;
// }

// using recursion

#include <bits/stdc++.h>
using namespace std;
class queue_using_stack
{
public:
    stack<int> st1;
    stack<int> st2;
    void push(int x)
    {
        st1.push(x);
    }
    int pop()
    {
        if (st1.empty())
        {
            cout << "limit has reached" << endl;
            return -1;
        }
        
        int a= st1.top();
        st1.pop();
        if (st1.empty())
        {
            return a;
        }
        
        int item = pop();
        st1.push(a);
        return item;
    }
    int top()
    {
        if (st1.empty())
        {
            cout << "no element" << endl;
            return -1;
        }

        return st1.top();
    }
    int ttop()
    {
        if (st2.empty())
        {
            cout << "no element" << endl;
            return -1;
        }

        return st2.top();
    }
    bool empty()
    {
        if (st1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue_using_stack q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    // cout << q.top() << endl;
    // cout << q.ttop() << endl;
    return 0;
}