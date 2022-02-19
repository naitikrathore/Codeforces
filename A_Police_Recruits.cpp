#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    int pol=0;
    int crime=0;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s>=0)
            pol=pol+s;
        else
        { 
            if(pol==0)
               crime++;
            else
                pol--;
       }
    }
       cout<<crime;
    }

