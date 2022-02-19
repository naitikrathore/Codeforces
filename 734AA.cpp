#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
int count=0;
int count1=0;
   for(int i=0; i<s.length(); i++){
       if(s[i]=='A')
       count++;
       else if(s[i]=='D')
       count1++;
   }

if(count>count1){
cout<<"Anton";
}else if(count1>count){
cout<<"Danik";
}else{
    cout<<"Friendship";
}

}