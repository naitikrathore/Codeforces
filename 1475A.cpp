#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  n;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    cin>>n;
    for(long long int i=2; i<=n; i++){
    if(n%i==0)
        if(i%2!=0)
        cout<<"YES"<<endl;
    }
    cout<<"NO"<<endl;
    }
}