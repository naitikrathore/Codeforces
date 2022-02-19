#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
   int s;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++){
      
     k=k*i;
     k=k*2;
     s=s+k;

}
    cout<<s-n<<endl;

}