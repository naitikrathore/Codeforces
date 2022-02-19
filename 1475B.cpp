#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int m=n%10;
        int d=n/10;
        if(m%2==0 || d%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}