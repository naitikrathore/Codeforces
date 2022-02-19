#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a="I hate it";
    string b="I love it";
    string c="I hate that";
    string d="I love that";
    if(n==1)
    cout<<a;
    else if(n==2)
    cout<<c<<b;
   for(int i=0; i<n-1; i++){
       if(i%2==0)
       cout<<d;
       else
       cout<<c;
   }
   if(n%2==0)
   cout<<b;
   else
   cout<<a;
}