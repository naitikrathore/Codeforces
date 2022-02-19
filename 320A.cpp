#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;
    string s;
    s=to_string(n);
    for(int i=0; i<s.length();){
        if(s[i]=='1'){
         i++;
       }else if(s[i]=='1' && s[i]=='4'){
        i+2;
       }else if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4'){
         i+3;
    }else{
        flag=1;
        break;
    }
}
if(flag==0)
    cout<<"YES";
    else
    cout<<"NO";
}