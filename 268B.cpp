#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     long long n,p=0;
     cin>>n;
     for(int i=1; i<n; i++){
       p=p+((n-i)*i);
     }
     cout<<p+n<<endl;
 }