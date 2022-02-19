#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,l;
    cin>>n>>m;
    if(m>n)
    l=-1;
    else
    {
        if(n%2==0)
         l=n/2;
         else
         l=(n/2)+1;
         while(l%m != 0)
         {
           l++;
         }

}
cout<<l;
}