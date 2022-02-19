#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;

    for(int i=0; i<t; i++){
        int result=0;
        cin>>n;
         int arr[n];
        for(int j=0; j<n; j++){
          cin>>arr[j];
        }
        sort(arr,arr+n);
        for(int j=1; j<n; j++){
              if(arr[j]-arr[j-1]>1){
               result =1;
               cout<<"NO"<<endl;  
               break;    
        }
        }
         if(result==0)
             cout<<"YES"<<endl;
        
    }  
    
    
}