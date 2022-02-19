#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
int p,q;
for(int i=0; i<t; i++){
    cin>>p>>q;
    if(p==q){
    cout<<"0"<<endl;
    }else if(abs(p-q)%10==0){
    cout<<abs(p-q)/10<<endl;
     } else{
        cout<<(abs(p-q)/10)+1<<endl;
}
}
}