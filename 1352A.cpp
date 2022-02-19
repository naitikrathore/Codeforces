#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int arr[6];
    int count=0; 
    int mul=1;
    for(int i=0; i<6; i++){
        arr[i]=n%10;
        n=n/10;
        if(arr[i]!=0)
        count++;
    }
    cout<<count<<endl;
    for(int i=0; i<6; i++){
        if(arr[i]!=0){
        cout<<arr[i]*mul<<" ";
        }
       mul=mul*10;
    }
    }
}

