#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j=n;
    int count=0;
   for(int i=1; i<n; i++ ){
       n--;
        if(j==i+n){
            count++;
        }
   } 
   cout<<count;
}