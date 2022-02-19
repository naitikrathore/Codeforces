#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p,q;
    int count=0;
    
    cin>>n;
  for(int i=n; i>0; i++){
      cin>>p>>q;
      if(q>p)
        count++;
  }
  cout<<count;
}
