#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t,n;
        int count=0;
        cin>>t;
     for(int i=0; i<t; i++){
         cin>>n; 
         //if(n==1)
         //cout<<count;
       while(num!=1)
	{
		if(num%6==0)
			num/=6,cnt++;
		else if(num%3==0)
			num*=2,cnt++;
		else
		{
			cnt=-1;
			break;
		}
	}
	cout<<cnt<<endl;
     } 
     
}