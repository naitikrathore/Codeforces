#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int oc=0;
        int total=0;
        for(int i=0; i<n; i++){
            if(s[i]=='(')
            oc++;
            else
            oc--;
            if(oc<0){
                total++;
                oc=0;
            }

        }
        cout<<total;
    }