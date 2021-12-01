// #include <bits/stdc++.h>
// #include <stack>
// using namespace std;
// int b = 5;
// void recway(int value)
// {
//     if (b == 0)
//     {
//         return;
//     }

//     stack<int> st;
//     recway(value);
//     st.push(value);
//     b--;
//     cout << st.top() << " ";
// }

// int main()
// {

//     // for (int i = 0; i < 5; i++)
//     // {
//     //     int a;
//     //     cin>>a;
//     //     st.push(a);
//     // }
//     // cout<<st.top()<<endl;
//     // for (int i = 0; i < 5; i++)
//     // {
//     //    pt.push(st.top());
//     //    st.pop();
//     // }
//     // cout<<pt.top()<<endl;
//     recway(5);
//     recway(4);
//     recway(3);
//     recway(2);
//     recway(1);

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;
void insertatbottom(stack<int> &st, int a)
{
    if (st.empty())
    {
        st.push(a);
        return;
    }
    int p = st.top();
    st.pop();
 
    insertatbottom(st, a);
    st.push(p);
}
void rev(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int a = st.top();
        st.pop();
        rev(st);
        insertatbottom(st, a);
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    rev(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}