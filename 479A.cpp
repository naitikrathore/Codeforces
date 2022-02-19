#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
   int max_A=max(a+b*c , a*(b+c));
   int max_B=max(a*b*c, (a+b)*c);
   int max_C=max(max_B,a+b+c);
   
   cout<<max(max_A,max_C);
}