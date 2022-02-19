#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int count=1;
    
    for(int i=0; i<t; i++){
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++){
          cin>>arr[j];
        }
        sort(arr,arr+n);
        for(int j=0; j<n-1; j++){
              if(arr[j+1]-arr[j]<=1)
                count++;
              //  else if(arr[j]==arr[j+1])
              //  count++;
        }
         if(count==n)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }  
    
}