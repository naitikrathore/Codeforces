#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;
int j=240-k;
int count=0;
int m=0;

for(int i=1; i<=n; i++){
    m=m+(5*i);
if(m<=j)
count++;
else
break;
}
cout<<count;

}