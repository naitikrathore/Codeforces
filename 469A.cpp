#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p,q;
    cin>>p;
    int count=0;
    int arr[n];
    for(int i=0; i<p; i++){
        cin>>arr[i];
    }
    for(int i=p; i<p+q; i++){
        cin>>arr[i];
    }
    sort(arr,arr+(p+q));
    for(int i=0; i<p+q; i++){
        if(arr[i]!=arr[i+1])
           count++;
    }
    if(count==n){
     cout<<"I become the guy.";
    }else{
      cout<<"Oh, my keyboard!";
    }
}