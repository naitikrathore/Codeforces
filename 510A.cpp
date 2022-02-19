#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int odd=0;
   for(int j=0; j<n; j++){
       
       if(j%2==0){
         for(int i=0; i<m; i++){
             cout<<"#";
         }
       } else{
       odd++;
       for(int i=0; i<m-1; i++){
         
         if(odd%2!=0 && j==m-1)
           cout<<"#";
       else if(odd%2==0 && j==0)
             cout<<"#";
        else
        cout<<".";
   } 
   cout<<endl;
   }
}
}