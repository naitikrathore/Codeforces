#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sml;
    int lar;
    int count=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
         if(arr[i]>arr[i+1]){
         sml=arr[i+1];
         count++;
         }
         if(arr[i]<arr[i+1]){
         lar=arr[i+1];
         count++;
         }
    }
    cout<<count;
    
}