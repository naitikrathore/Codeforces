#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int arr[400];
    int count =1;
    for(int i=1; i==d; i++){
        arr[i]=k*i;
        arr[i]=l*i;
        arr[i]=m*i;
        arr[i]=n*i;

    }
    sort(arr,arr+d);
    for(int i=1; i==d; i++){
        if(arr[i]!=arr[i+1])
        count++;
    }
   cout<<count;
    
}