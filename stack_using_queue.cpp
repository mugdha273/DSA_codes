// #include <bits/stdc++.h>
// using namespace std;
// class Stack
// {
// public:
//     queue<int> q1;
//     queue<int> q2;
//     int N;
//     Stack()
//     {
//         N = 0;
//     }
//     void push(int value)
//     {
//         q2.push(value);
//         N++;
//          while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();

//         }
//         queue<int>temp=q1;
//         q1=q2;
//         q2=temp;
//     }
//     void pop()
//     {
//         q1.pop();
//         N--;
//     }
//     int top()
//     {
//         return q1.front();
//     }
//     int size()
//     {
//         return N;
//     }

// };

// int main()
// {
//     Stack q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout<<q.top()<<endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    queue<int> q1;
    queue<int> q2;
    int N;
    Stack()
    {
        N = 0;
    }
    void push(int value)
    {
        q1.push(value);
        N++;
    }
    int size()
    {
        return N;
    }
    void pop()
    {
        if (q1.empty())
        {
            return;
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    int top()
    {
        if (q1.empty())
        {
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;

    return 0;
}