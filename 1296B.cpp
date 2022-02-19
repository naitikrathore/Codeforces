#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,d,p;
  cin>>t;
  while(t--){
      int s;
      cin>>s;
      int count=0;

      while(1){
          d=(n/10)*10;
          count+=d;
          p=n-d;
          n=(n/10)+p;
          if(n<10){
              count+=n;
              break;
          }  
      }
      cout<<count<<endl;
  }
}