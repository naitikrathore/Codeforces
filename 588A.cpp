#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,p, min_price=0,count, total_prize=0;;
     for(int i=1; i<=n; i++){
        cin>>a>>p;
        if(i=1){
        min_price=p;
        total_prize+=a*p;
         }else if(p<min_price){
        min_price=p;
         }
         total_prize+=a*min_price;
   }
}