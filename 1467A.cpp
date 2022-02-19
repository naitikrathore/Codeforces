#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--){
          int m=9;
          cin>>n;
          for(int i=0; i<n; i++){
              if(i==0){
                  cout<<m;
                  m--;
              }else{
                  cout<<m;
               m++;
          }
          if(m==10)
          m=0;
        }
        cout<<endl;
    }
}