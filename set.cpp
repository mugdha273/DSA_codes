#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100];
    int n;
    cin>>n;
    set<int>st;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
       st.insert(a[i]++);
    }
    set<int>::iterator it;
    for ( it = st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    
       return 0;
}