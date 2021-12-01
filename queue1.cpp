// #include <iostream>
// #define n 100
// using namespace std;
// class queue
// {
//        int *arr;
//        int front;
//        int back;

// public:
//        queue()
//        {
//               front = -1;
//               back = -1;
//               arr = new int[n];
//        }
//        void enqueue(int a)
//        {
//               if (back == n - 1)
//               {
//                      cout<<"its limit"<<endl;
//                      return;
//               }
//               back++;
//               arr[back]=a;
//               if (front==-1)
//               {
//                      front++;
//               }
              
//        }
//        void dequeue()
//        {
//               if (front>back||front==-1)
//               {
//                     cout<<"c'mon dude"<<endl;
//                     return ;
//               }
              
//               front++;
//        }
//        bool empty()
//        {
//               if (front>back || front==-1)
//               {
//                      return true;
//               }
//               return false;
              
//        }
//        int peek()
//        {
//               if (front>back || front==-1)
//               {
//                      cout<<"nothing to return";
//                      return -1;
//               }
              
//               return arr[front];

//        }
// };

// int main()
// {
//        queue qu;
//        qu.enqueue(1);
//        qu.enqueue(2);
//        qu.enqueue(3);
//        qu.enqueue(4);
//        qu.enqueue(5);
//        cout<<qu.peek()<<endl;
//        qu.dequeue();
//        cout<<qu.peek()<<endl;

//        return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
       queue<int>q;
       q.push(1);
       q.push(2);
       q.push(3);
       q.push(4);
       cout<<q.back()<<endl;
       q.pop();
       cout<<q.front()<<endl;
          return 0;
}