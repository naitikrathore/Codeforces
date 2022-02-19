#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        while(b--){
            a=round(a/2+10);
        }
        while(c--){
            a=a-10;
        }
        if(a<=0){
        cout<<"YES"<<endl;
         } else{
        cout<<"NO"<<endl;
         }
    }
}