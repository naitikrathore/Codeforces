#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int cnt1=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0')
        cnt++;
        else
        cnt1++;
    }
    int m=min(cnt,cnt1);
    cout<<n-2*m;
}