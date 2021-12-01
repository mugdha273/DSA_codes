// #include<iostream>
// using namespace std;
// void towerofHanoi(int n,char src,char dest,char helper)
// {
//     if (n==0)
//     {
//         return;
//     }
//     towerofHanoi(n-1,src,dest,helper);
//     cout<<"move from "<<src<<" to "<<dest<<endl;
//     towerofHanoi(n-1,src,helper,dest);

// }
// int main(){
//     char A,B,C;
//     towerofHanoi(3,'A','B','C');
//        return 0;
// }

// #include<iostream>
// using namespace std;
// string remove(string s)
// {
//     if (s.length()==0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = remove(s.substr(1));
//     if (s[0]==s[1])
//     {
//         return ans;
//     }
//     else{
//         return ch+ ans;
//     }

    
// }

// int main(){
//     string s= "aaabbbbcccddd";
//     cout<<remove(s)<<endl;
    
//        return 0;
// }
#include<iostream>
using namespace std;
string moveallx(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));
    if (s[0]=='x')
    {
        return ans+ch;
    }
    else
    {
        return ch+ans;
    }
    
}

int main(){
    string s= "axxxbbbxxxddef";
    cout<<moveallx(s)<<endl;
       return 0;
}