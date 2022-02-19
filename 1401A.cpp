#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t,n,k,count;
  cin>>t;
  while(t--){
    cin>>n>>k;
    
    if(k>n)
    count=k-n;
    else{
      if(n%1)
      count=(k&1) ? 0:1;
      else
      count=!(k&1) ? 0:1;
    }
    cout<<count<<endl;
  }
  
}