#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int total=0;
    int spilit;
    int sum=0;
    int count=0;
    {
        for(int i=0; i<n; i++){
            cin>>arr[i];
            total+=arr[i];
        }
        spilit=total/2;
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            sum+=arr[i];
            count++;
           if(sum>spilit)
           break;
        } 
        cout<<count;

    }
}