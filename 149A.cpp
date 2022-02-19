#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,sum;
    cin>>k;
    int n=12;
    int arr[n];
    int count=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1; i>=0; i--){
       sum+=arr[i];
       count++;
       if(sum>=k){
        cout<<count;
        break;
       }

       
    }



}