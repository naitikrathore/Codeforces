#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum;
    int sum1;
    int sum3;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }else{
            sum1=sum1+arr[i];
        }
    }
    cout<<-sum+sum1;
    
}