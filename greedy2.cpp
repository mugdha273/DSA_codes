#include <bits/stdc++.h>
using namespace std;
bool comp( vector <int> &a, vector<int> &b)
{
    return (a[1] < b[1]);
}


int main()
{
    int t;
    cin>>t;
    vector<vector<int>> vect;
    int arr[t];
    int brr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        cin >> brr[i];
    }
    for (int i = 0; i < t; i++)
    {
        vect.push_back({arr[i], brr[i]});
    }
    sort(vect.begin(), vect.end(), comp);
    cout<<"************"<<endl;
    for (int i = 0; i < t; i++)
    {
       cout<<vect[i][0]<<" "<<vect[i][1]<<endl;
    }
    cout<<"************"<<endl;
    int ans=1;
    int curr= vect[0][1];
    for (int i = 1; i < t; i++)
    {
        cout<<vect[i][1]<<" "<<curr<<endl;
        if(vect[i][0]>curr)
        {
            ans++;
            curr=vect[i][1];
        }
        
    }
    cout<<ans<<endl;
        return 0;
}