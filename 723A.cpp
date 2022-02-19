#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int sum,sum1;
    int arr[3]={x1,x2,x3};
    sort(arr,arr+3);
    sum=arr[1]-arr[0];
    sum1=arr[2]-arr[1];
    cout<<sum+sum1;
}
