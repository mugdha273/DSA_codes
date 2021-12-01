// #include <bits/stdc++.h>
// #define cl cout << endl;
// using namespace std;
// int main()
// {
//     priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>  > pqm; //min heap
//     priority_queue<pair<int,int>, vector<pair<int,int>>> pq;  //max heap
//     vector<int> v = {100, 2, 89, 36, 42, 91, 42};
//     vector<int> v1 = {96, 39, 82, 76, 172, 5, 172};

//     for (int i = 0; i < v.size(); i++)
//     {

//         pq.push({v[i],v1[i]});
//         pqm.push({v[i],v1[i]});

//         // pq.push(temp);
//     }

//         cout<<"max heap is: ";
//         cl

//         while (!pq.empty())
//         {
//             pair<int, int> top = pq.top();
//             cout << top.first << " " << top.second;
//             cl
//             pq.pop();
//         }

//         cout<<"min heap is: ";
//         cl

//         while (!pqm.empty())
//         {
//             pair<int, int> top = pqm.top();
//             cout << top.first << " " << top.second;
//             cl
//             pqm.pop();
//         }

//     return 0;
// }

// //find third smallest element in the array 7,10,4,3,20,15

// // #include <bits/stdc++.h>
// // #define cl cout << endl;
// // #define sz size()
// // using namespace std;
// // int main()
// // {
// //     vector<int> v = {7, 10, 4, 4, 20, 15};
// //     priority_queue<int, vector<int>,greater<int>> pq;
    

// //     for (int i = 0; i < v.sz; i++)
// //     {
// //         pq.push(v[i]);
// //         if (pq.size()>1)
// //         {
// //             pq.pop();
// //         }
        
// //     }

// //     cout<<"------"<<pq.top();
// //     cl;

// //     return 0;
// // }


#include <bits/stdc++.h>
#define cl cout << endl;
using namespace std;
int main()
{
    priority_queue<int, vector<int>,greater<int>> pqm; //min heap
    priority_queue<int, vector<int>> pq;  //max heap
    vector<int> v = {100, 2, 89, 89, 42, 91, 555};

    for (int i = 0; i < v.size(); i++)
    {

        pq.push(v[i]);
        pqm.push(v[i]);
        

        // pq.push(temp);
    }

        cout<<"max heap is: ";
        cl

        while (!pq.empty())
        {
            int temp = pq.top();
            pq.pop();
            cout << temp << endl;
        }

        cout<<"min heap is: ";
        cl

        while (!pqm.empty())
        {
            int temp = pqm.top();
            pqm.pop();
            cout << temp << endl;
        }

    return 0;
}

