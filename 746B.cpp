#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string k;
    for(int i=0;i<n;i++){
        if(i%2!=0)
         k=s[i]+k;
        else
         k=k+s[i];
    }
    cout<<k;
}