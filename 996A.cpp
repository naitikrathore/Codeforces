#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int s;
  int count=0;
  cin>>n;  
  int arr[5]={100,20,10,5,1};
  for(int i=0; i<5; i++){
      if(n>=arr[i]){
          n=n-arr[i];
          count++;
      }
  }
  cout<<count;

}