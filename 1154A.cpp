#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4;
    int n=4;
    cin>>x1>>x2>>x3>>x4;
    int arr[n]={x1,x2,x3,x4};
     
  sort(arr,arr+n);
  int lar=arr[n-1];
for(int i=0; i<n-1; i++){
    cout<<lar-arr[i]<<" ";
}

}

    