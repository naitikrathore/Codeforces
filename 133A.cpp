#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin>>p;
    string k="HQ9+";
    int count=1;
    for(int i=0; i<k.length(); i++){
        for(int j=0; j<p.length(); j++){
              if(k[i]==p[i])
              count++;
        }
    }
    if(count>1)
    cout<<"YES";
    else
    cout<<"NO";
}