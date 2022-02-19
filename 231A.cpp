#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    int count=0;
    cin>>n;
    int i=0;
      while(i<n){
          cin>>a>>b>>c;
          if(a==1&&b==1){
              count++;
              i++;
          }
          else if(a==1&&c==1){
              count++;
              i++;
          }else if(b==1&&c==1){
              count++; 
              i++;
          }
         else{
             i++;
         }
         
      } cout<<count<<endl;
      
    
}