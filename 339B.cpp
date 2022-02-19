#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<int>v;
    int count=0;
    for(int i=0; i<m; i++){
        cin>>v[i];
    }
    for(int i=0; i<m; i++){
        if(v[i]<v[i+1])
        count+=v[i+1]-v[i];
        else if(v[i]>v[i+1])
         count+=(n-v[i])+v[i+1];
    }
    count+=v[0]-1;
    cout<<count;
}