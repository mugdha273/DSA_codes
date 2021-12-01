#include<bits/stdc++.h>
using namespace std;

void remove(vector<int> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
}

int main(){
    // unordered_set<int> s;
    // int arr[]={2,5,4,2};
    // for (int i = 0; i < 4; i++)
    // {
    //     s.insert(arr[i]);
    // }
    // unordered_set<int>::iterator itr;
    // for (itr = s.begin(); itr != s.end(); itr++)
    // {
    //     cout << *itr<<" ";
    // }
    vector<int>vec;
    int arr[]={2,5,4,2};
    for (int i = 0; i < 4; i++)
    {
        vec.push_back(arr[i]);
    }

    // vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    remove(vec);

    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << *it << ' ';
    }
    

    
       return 0;
}