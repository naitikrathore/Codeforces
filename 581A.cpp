#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    int count1=0;

    while(a!=0 && b!=0){
        a--;
        b--;
        count++;
    }
    if(a>0){
        count1=a/2;
    }else{
        count1=b/2;
    
    }
   cout<<count<<" "<<count1;
}