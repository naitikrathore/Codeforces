#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
string d;
cin>>s;
cin>>d;

for(int i=0; i<s.length(); i++){
    if(s[i]==d[i]){
        s[i]='0';
    }else{
        s[i]='1';
    }
}
}
