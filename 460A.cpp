#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int k=n;
    while(n>=m){
        k+=n/m;
        n=((n/m)+(n%m));
    }
    cout<<k;
}