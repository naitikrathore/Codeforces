#include<bits/stdc++.h>
using namespace std;

int main ()
{
  long long int t;
    cin>>t;
    while(t--){
       long long int n;
        cin>>n;
       long long int arr[n];
       long long int count=0;
        long long int count1=0;
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(long long int i=0; i<n-1; i++){
           if(arr[i]==0 && arr[i+1]==0){
            count=1;
        }
        else{
            count1=1;
        }
        }
        if(count==1){
            cout<<"NO"<<endl;
        }
        else if(count1==1){
            cout<<"YES"<<endl;
        }
    }
}