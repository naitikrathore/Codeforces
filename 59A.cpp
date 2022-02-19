#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   int upper=0;
   int lower=0;
   int i;
   for(i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
       upper++;
   } else{
       lower++;
   }
   }
   char c;
   if(upper>lower){
        for(i=0; i<s.length(); i++){
       c=toupper(s[i]);
       cout<<c;
        }
   }else{
        for(i=0; i<s.length(); i++){
         c=tolower(s[i]);
         cout<<c;
   }

   }
}
