#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,g,f;
    cin>>s>>g>>f;
    string k=s+g;    
    int count=0;
    sort(f.begin(), f.end());
    sort(k.begin(),k.end());
    if(f.length()!=k.length()){
        cout<<"NO";
    }else{
        for(int i=0; i<f.length(); i++){
            if(f[i]==k[i]){
            count++;
            }else{
                count--;
            }
    }
    }
    if(count==k.length())
      cout<<"YES";
    
}