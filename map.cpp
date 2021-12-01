#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    map<int,int>freq;
    cin>>n;
    int a[100];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    map<int,int>::iterator it;

    // for (it=freq.begin();it!=freq.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    for (it=freq.begin();it!=freq.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    

    
    
       return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     map<string,int> marks;
//     marks["shubhi"]= 93;
//     marks["mugdha"]=97;
//     marks["z"]= 100;

//     map<string,int>::iterator it;
//     for (it=marks.begin(); it!=marks.end(); it++)
//     {
//         cout<<it->first<<" "<<it->second<<endl;
//     }
    
    
//        return 0;
// }