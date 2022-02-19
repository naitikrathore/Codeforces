#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;
    string d;
     for(int i=s.length()-1; i>=0; i--){
         d.push_back(s[i]);
     }
      if(t==d){
          cout<<"YES";
      }else{
          cout<<"NO";
      }
    }

