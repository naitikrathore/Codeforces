#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    int count=1;
    int flag=0;
    int m=n;
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }  
  sort(arr,arr+n);
  for(int i=0; i<n-1; i++){
       if(arr[i]==arr[i+1]){
            count++;
            m--;
            flag=1;
       }
       if(flag==1){
       if(count>sum){
       sum=count;
       count=1;
       flag=0;
      }
       }
  }
   cout<<sum<<m;
}