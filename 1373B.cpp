#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int count=0;
    string s;
    while(t--){
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=s[i+1])
        count++;
    }
    if(count%2==0)
    cout<<"NET";
    else
    cout<<"DA";
    }
}