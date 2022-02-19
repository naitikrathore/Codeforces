#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,lar;
    cin>>n;
   int arr[n];
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }
  sort(arr,arr+n);
  arr[n-1]=arr[n-2];
  cout<<arr[n-1]-arr[0];
}