#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  n;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    cin>>n;
    if(ceil(log2(n)) == floor(log2(n)))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
}