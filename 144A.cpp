#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[500];
    int lar;
    int sml;
    int count,count1;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    lar=arr[0];
        for(int i=0; i<n; i++){
           if(lar<arr[i]);
           lar=arr[i];
        }
    sml=arr[0];
     for(int i=0; i<n; i++){
           if(sml>arr[i]);
           sml=arr[i];
     }
   for(int i=0; i<n; i++){
       if(arr[i]==lar)
       count=i-0;
   }
     for(int i=n-1; i>=0; i--){
       if(arr[i]==sml)
       count1=i;
     }
     if(count>count1){
         count1--;
         cout<<count+count1;
     }else{
     cout<<count+count1;
    }
}