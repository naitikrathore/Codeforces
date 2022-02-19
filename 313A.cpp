#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c,d;
  
    if(n>=0){
        cout<<n;
    }else{
        c=n/10;
       d=n/100*10+n%10;
    }
    cout<<max(c,d)<<endl;
}