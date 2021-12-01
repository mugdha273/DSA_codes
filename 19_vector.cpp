// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << "***" << endl;
//     vector<int>::iterator it;
//     for (it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << "***" << endl;
//     for (auto element : v)
//     {
//         cout << element << " ";
//     }
//     cout << "***" << endl;
//     v.pop_back();
//     vector<int>v2 (3,50);
//     swap(v,v2);
//     for (auto element : v)
//     {
//         cout << element << " ";
//     }
//     for (auto element : v2)
//     {
//         cout << element << " ";
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     // vector<int>v;
//     pair<int,int>v;
//     v= make_pair(10,20);
//     cout<<v.first<<endl;
//        return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10, 20, 30, 30, 30, 20, 50, 30, 60};
    vector<int>::iterator low, up;
    low = lower_bound(v.begin(), v.end(), 30);
    up = upper_bound(v.begin(), v.end(), 30);
    cout<<low - v.begin()<<" "<<(up - v.begin())-1<<endl;
    return 0;
}