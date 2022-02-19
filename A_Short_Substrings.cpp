#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        for(int i=0; i<s.length(); i++){
             if(i==0 || i==s.length()-1){
                 t+=s[i];
             }else{
                 t+=s[i];
                 i++;
             }

        }
        cout<<t<<endl;
    }
}