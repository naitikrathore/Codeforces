#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=1;
    
    for(int i=0; i<s.length(); i++){
         if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
             i+=2;
         if(!count){
         cout<<" ";
         }
         continue;
         }
         else{
             count=0;
             cout<<s[i];
             
         }

    }
}