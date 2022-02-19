#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   int j=0;
   int count=0;
   cin>>n;
   string s;
   cin>>s;
   string d="pangram";
   if(n==s.length()){
    for(j=0;j<d.length();j++){
    for(int i=0; i<n; i++){
        if(d[j] == s[i]){
            count++;
        }
        else{
            cout<<"NO";
        }
    }
      }
      if(count==7)
      cout<<"YES";

   }




