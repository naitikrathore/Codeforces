#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d;
    cin>>t;
    while(t--){
       cin>>a>>b>>c>>d;
     long long int B=b;
    long long  int count=0;
     long long int CD=c-d;
      if(b>=a){
          cout<<b<<endl;
      }else if(c<=d){
          cout<<-1<<endl;
      }else{
          while (b<a){
              b=b+CD;
            count++;
          }
        cout<<(c*count)+B;

      }
        
    }
}