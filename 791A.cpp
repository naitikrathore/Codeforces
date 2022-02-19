#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a,b;
 cin>>a>>b;
 int count=0;
for(int i=1;;i++){
    a=a*3;
    b=b*2;
    i++;
    count++;
    if(a>b)
    break;

}   
cout<<count<<endl;

}
