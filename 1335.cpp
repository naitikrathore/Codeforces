#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n>>a>>b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
     for(int i=0; i<b; i++){
          s[i]=c[i];
    }
    int k=0;
    while(n--){
        cout<<s[k];
        k++;
        if(k==b)
        k=0;
    }
     cout<<endl;
    }


}