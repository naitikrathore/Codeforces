#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    string s;
    for(int i =0; i<n; i++){
        cin>>s;
    }
    for(int i =0; i<s.length()-1; i++){
        if(s[i]==s[i+1])
        count++;
    }
    cout<<count;
}