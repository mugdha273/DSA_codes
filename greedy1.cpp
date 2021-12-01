#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v;
    int arr[10]={2000,500,200,100,50,20,10,5,2,1};
    for (int i = 0; i < 10; i++)
    {
        v.push_back(arr[i]);
    }
    int denomination,ans=0;
    cin>>denomination;
    for (int i = 0; i < v.size(); i++)
    {
        // if (v[i]<=denomination && v[i]!=1 && v[i]!=2 && v[i]!=5)
        // {
        //     while (denomination>=v[i])
        //     {
        //         denomination-=v[i];
        //     }
            
        // }
        // if (v[i]<=denomination && (v[i]==1 || v[i]==2 || v[i]==5))
        // {
        //     while (denomination>=v[i])
        //     {
        //         denomination-=v[i];
        //         ans++;
        //     }
            
        // }
        ans+= denomination/v[i];
        denomination-= (denomination/v[i])* v[i];
        
        
    }
    cout<<ans<<endl;
    

    
       return 0;
}