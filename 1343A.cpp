#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        int i=1;
        cin>>n;
        while(i+(2*i)+(4*i)!=n){
               i++;           
        }
        cout<<i;
        i=1;
    }
}