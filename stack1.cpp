#include <bits/stdc++.h>
#define n 100
using namespace std;

class stackk
{
    int *arr;
    int top;

public:
    stackk()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int value)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = value;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "nothing to pop out" << endl;
            return;
        }

        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "no element in top" << endl;
            return -1;
        }

        return top;
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stackk st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    cout << st.empty() << endl;

    return 0;
}