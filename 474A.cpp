#include<bits/stdc++.h>
using namespace std;

int main()
{
   string d; 
   cin>>d;
   string f;
   cin>>f;
   char ch='R';
   char chf='L';
   string s="qwertyuiop";
   string s1="asdfghjkl;";
   string s2="zxcvbnm,./";

   if (d.find(ch) != string::npos ){
      for(int i=0; i<f.length(); i++){
          for(int j=0; j<s.length(); j++){
              if(f[i]==s[j]){
                  cout<<s[j-1];
              }
          }
          for(int k=0; k<s1.length(); k++){
              if(f[i]==s1[k]){
                  cout<<s1[k-1];
              }
          }
           for(int l=0; l<s2.length(); l++)
                if(f[i]==s2[l]){
                    cout<<s2[l-1];
                }
      }
   }
   else if(d.find(chf) != string::npos){
       
       for(int i=0; i<f.length(); i++){
          for(int j=0; j<s.length(); j++){
              if(f[i]==s[j]){
                  cout<<s[j+1];
              }
          }
          for(int k=0; k<s1.length(); k++){
              if(f[i]==s1[k]){
                  cout<<s1[k+1];
              }
          }
           for(int l=0; l<s2.length(); l++)
                if(f[i]==s2[l]){
                    cout<<s2[l+1];
                }
       }
   }  
}