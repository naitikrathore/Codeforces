#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
    cin>>n;
   long long int count=0;
   long long int z=0;
    long long int k=0;
   long long int p=0;
   long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==1 || arr[i]==-1){
             continue;
        }
        else if(arr[i]>1){
            count=count+(arr[i]-1);
            arr[i]=1;
        }else if(arr[i]<-1){
            count=count+abs(arr[i]+1);
            arr[i]=arr[i]-(arr[i]+1);
        }

    }
    for(int i=0; i<n; i++){
     if(arr[i]==0){
         z++;
         arr[i]=1;
     }else if(arr[i]==-1){
           k++;
     }else if(arr[i]==1){
     p++;
    }
    }
   count=count+z;
   p=p+z;
   if(k%2==1){
       if(z>0){
           p--;
       } else{
           count=count+2;
       }
   }
   cout<<count;

}
